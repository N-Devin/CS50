#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
bool check_val(string s);

int main(int argc,string argv[])
{
    if(argc != 2 || !check_val(argv[1]) )
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    string str = argv[1];
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i]>=65 && str[i]<=90)
         str[i]=str[i]+32;
    }
       
    //printf("%s\n",str);
    string plaintext =get_string("plaintext:");
    printf("ciphertext:");
    for(int i = 0, len = strlen(plaintext); i< len ; i++)
    {
        char c = plaintext[i];
        if(isalpha(c))
        {
            if(islower(c))
            {
              char m = 'a';
              printf("%c",(str[(c-m)]));
            }
            else
            {
                char w = 'A';
                printf("%c",toupper(str[(c-w)]));
            }
            
            
        }
        else
        printf("%c",c);
    }
    printf("\n");


}
bool check_val(string s)
{
    int len = strlen(s);
    int freq[26] = {0};
    for (int i=0 ;  i<len ; i++)
    {
    if(!isalpha(s[i]))
    return false;
    int index = toupper(s[i]) -'A';
    if(freq[index] > 0)
    return false;
    freq[index]++;
    
    }
    return true;
}
