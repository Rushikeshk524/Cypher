#include <stdio.h>

int search(int key, int frame_items[], int frame_occupied);

void printOuterStructure(int max_frames);

void printCurrFrames(int items, int frame_items[], int frame_occcupied, int max_frames);

int predict(int ref_str[], int frame_items[], int refStrLen, int index, int frame_occupied);

void optimalPage(int ref_str[], int refStrLen, int frame_items[], int max_frames);


int main()
{
    int ref_str[] = {9, 0, 5, 1, 0, 3, 0, 4, 1, 3, 0, 1, 3};
    int refStrLen = sizeof(ref_str)/sizeof(ref_str[0]);
    int max_frames = 3;
    int frame_items[max_frames];

    optimalPage(ref_str, refStrLen, frame_items, max_frames);
    return 0;
}

void optimalPage(int ref_str[], int refStrLen, int frame_items[], int max_frames)
{
    //Initially none of the frames are occupied
    int frame_occupied = 0;
    printOuterStructure(max_frames);

    //Here we traverse through references string
    //and check for miss and hit.
    int hits = 0;
    for(int i = 0; i < refStrLen; i++)
    {   
        //If found already in the frame items: HIT
        if(search(ref_str[i], frame_items, frame_occupied))
        {
            hits++;
            printCurrFrames(ref_str[i], frame_items, frame_occupied, max_frames);
            continue;
        }

        //If not found in frame items: MISS

        //If frames are empty then current reference string item in frame

        if(frame_occupied < max_frames)
        {
            frame_items[frame_occupied] = ref_str[i];
            frame_occupied++;
            printCurrFrames(ref_str[i], frame_items, frame_occupied, max_frames);
        }

        //else we need to use optimal algorithm to find
        //frame index where we need to do replcement for this
        //incoming refrences string item
        else
        {
            int pos = predict(ref_str, frame_items, refStrLen, i + 1, frame_occupied);
            frame_items[pos] = ref_str[i];
            printCurrFrames(ref_str[i], frame_items, frame_occupied, max_frames);
        }

    }
    printf("\n\nHits: %d\n",hits);
    printf("Misses: %d\n", refStrLen - hits);

}

int predict(int ref_str[], int frame_items[], int refStrLen, int index, int frame_occupied)
{   
    //For each current occupant in frame item
    //we try to find the frame item that will not be refrenced in
    //for the longest in future in the upcomming refrence string
    int result = -1, farthest = index;
    for(int i = 0; i < frame_occupied; i++)
    {
        int j;
        for(j = index; j < frame_occupied; j++)
        {
            if(frame_items[i] == ref_str[j])
            {
                if(j > farthest)
                {
                    farthest = j;
                    result = i;
                }
                break;
            }   
        }

        //If we find a page that is never refrenced in future,
        //return it immediately as its the best
        
        if(j == refStrLen) return i;
    }
    //if none of the frame items appear in reference string
    //in the future then we return 0th index. otherwise we return result
    return (result == -1) ? 0 : result;
}

void printCurrFrames(int item, int frame_items[], int frame_occupied, int max_frames)
{
    //print current refrence stream item
    printf("\n%d \t\t", item);

    //print frame occupants one by one
    for(int i = 0; i < max_frames; i++)
    {
        if(i < frame_occupied)
        {
            printf("%d \t\t", frame_items[i]);
        }
        else 
        {
            printf("- \t\t");
        }
    }
}

void printOuterStructure(int max_frames)
{
    printf("Stream ");

    for(int i = 0; i < max_frames; i++)
        printf("Frame%d ", i + 1);
}

int search(int key, int frame_items[], int frame_occupied)
{
    for(int i = 0; i < frame_occupied; i++)
        if (frame_items[i] == key)
            return 1;
    return 0;
}