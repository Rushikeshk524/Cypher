#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool Anagram(char t[], char s[]){
    int t_size = strlen(t);
    int s_size = strlen(s);
    if(t_size != s_size) return false;
    int charcount[26] = {0}; 
    for(int i = 0; i < t_size; i++){
        charcount[t[i] - 'a']++; 
        charcount[s[i] - 'a']--;
    } 
//ascii value of 'a' = 97 and so on, so difference b/w t[i] - 'a' ranges 0 - 26

    for(int i = 0; i < 26; i++){
        if(charcount[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    char t[] = "king";
    char s[] = "nikg";
    bool result = Anagram(t,s);
    printf("%d",result); 
}