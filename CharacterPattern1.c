/*   
A B C
B C A
C A B
*/

#include <stdio.h>

int main() {
    char arr[3]={'A','B','C'};
    int num;
    for(int i=0;i<3;i++){
        num=i;
     for(int j=0;j<3;j++){
         printf("%c ",arr[num]);
         num++;
         if(num==3){
             num=0;
         }
         
     }   
     printf("\n");
    }
    return 0;
}
