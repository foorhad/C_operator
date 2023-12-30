//working of (Bitwise)shift operator
#include<stdio.h>
int main()
{
 int num = 100;
 for (int i = 0; i < 3; i++)
 {
    printf("Right shift by %d = %d\n",i, num>>i);
 }
 printf("\n");

 for (int i = 0; i < 3; i++)
 {
    printf("Left shift by %d = %d\n",i, num<<i);
 }
    return 0;
}