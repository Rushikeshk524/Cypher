#include <stdio.h>
int naivestringmatch(char *text, char *pattern) {
    int i, j;
    for (i = 0; text[i] != '\0'; i++) {
        for (j = 0; pattern[j] != '\0' && text[i + j] == pattern[j]; j++);
        if (pattern[j] == '\0') return i;  // Match found
    }
    return -1;  // No match found
}
int main() {
    char text[] = "ababcabcabababd";
    char pattern[] = "ababd";    
    int result = naivestringmatch(text, pattern);
    if (result != -1) {
        printf("Pattern found at index: %d\n", result);
    } else {
        printf("Pattern not found\n");
    }
    return 0;
}   