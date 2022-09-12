#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int  n, g; 
   do
   {
      n = get_int("width:");
   }
  
   while(n > 8 || n < 1 );
   for (int i = 1; i <=n; i++)
   {
       int space = n - i ;
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
      for (int j = 0; j < i; j++)
     { 
        printf("#");
     }
  
   printf("\n");
   }
   
}