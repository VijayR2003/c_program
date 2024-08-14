#include<stdio.h>
int main()
{
    int a=5;

    for(int i=0;i<a;i++)
    {
        for(int k=0;k<a-i;k++)
        {
        printf(" ");
        }
        for(int j=0;j<1+(i*2);j++)
        {
            printf("*");
        }
         printf("\n");
        }
       
       
       
    }
    
   



