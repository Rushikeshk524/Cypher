#include <stdio.h>
#include <string.h>
#define max(a,b)((a) > (b) ? (a) : (b))
int main(){
    char text1[] = "abbbabbabbsa";
    char text2[] = "bbbabddababsa";
    int len1 = strlen(text1);
    int len2 = strlen(text2);
    int LCS[len1 + 1][len2 + 1];
    
    for(int i = 0; i <= len1; i++){
        LCS[i][0] = 0;
    }
    for(int i = 0; i <= len2; i++){
        LCS[0][i] = 0;
    }
    for(int i = 1; i <= len1; i++){
        for(int j = 1; j <= len2; j++){
            if(text1[i - 1] == text2[j - 1]){
               LCS[i][j] = 1 + LCS[i-1][j-1];
            }
            else{
                LCS[i][j] = max(LCS[i][j-1], LCS[i-1][j]);
            }
        }
    }

    printf("%d",LCS[len1][len2]);
    return 0;
}