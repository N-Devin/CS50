#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
bool check_valid_key(string s);

int main(int argc, string argv[])
{
    if (argc != 2 || if(isdigit(argv[1]) = 0)
    
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    
    string plaintext = get_string("plaintext:");
    
    printf("ciphertext:");
    for(int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            char m = 'A' ;
            if (islower(c))
            m = 'a';
            printf("%c", (c - m + key)%26 +m);
            
        }
        else
          printf("%c", c);
    }
    printf("\n");
}
