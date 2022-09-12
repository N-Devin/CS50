    #include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main (void)
{ float l = 0, w = 0, c = 0, index;
    string s = get_string("text:");

    // letter counter
    for (int i = 0; i < strlen(s);  i++)
    {

     if ((s[i] >= 'a' && s[i] <= 'z' ) || (s[i] >= 'A' && s[i] <= 'Z' ) )
    {
        l = l +1;
    }
    }
    //printf("%i letter(s) \n",l);

    // word counter
    for (int i = 0; i < strlen(s);  i++)
    {
    int result = isspace(s[i]);

    if (result == 0)
    {
        ;
    }
    else
    {
        w = w + 1;
    }
    }
    w = w+1;
    //printf("%i word(s)\n", w);

    //sentence counter
    for (int i = 0; i < strlen(s);  i++)
    {
        if(s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            c = c + 1;
        }

    }
    //printf("%i sntence(s)", c);

    //letters per 100 words
    float let = (l/w)*100;
    //printf("let per 100 words = %.2f", let);

    //sentences per 100 words
    float sen = (c/w)*100;
    //printf("sentences per 100 words = %.2f", sen);

    index = (0.0588 * let - 0.296 * sen - 15.8);
    if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
    printf("Grade %.0f\n", round(index));
    }
}
