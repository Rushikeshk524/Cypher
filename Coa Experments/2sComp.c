#include <stdio.h>
#include <string.h>
int main(){
    char bin[100];
    printf("Enter a Binary number: ");
    scanf("%s", bin);
    for(int i = 0; i < strlen(bin); i++){
        if(bin[i] == '0'){
            bin[i] = '1';
        }
        else{
            bin[i] = '0';
        }
    }
    for (int i = strlen(bin) - 1 ; i >= 0; i--)
    {
	if (bin[i] == '0')
	{
	    bin[i] = '1';
        break;
	}
	else
	{
	    bin[i] = '0';
	}
    }
    printf("2's Complement -> %s",bin);
return 0;
}