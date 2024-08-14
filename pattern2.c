#include<stdio.h>
int main()
{
    int a;
    printf("enter no of row");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
    
        for(int k=0;k<a-i;k++){
            printf("  ");
        
        }
        for(int j=0;j<i+1;j++)
    {
        printf(" *");
    }
printf("\n");
    }
    
}


