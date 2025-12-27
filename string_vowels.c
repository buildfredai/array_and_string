#include<stdio.h>
int main()
{
    int count =0;
    char s[50];
    gets(s);

    for(int i=0; s[i] != '\0';i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
                
        }
        }
    printf("number of vowels = %d\n",count);
    }
    