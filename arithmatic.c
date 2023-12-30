//working of Arithmetic operator
#include<stdio.h>
int main()
{
    int a = 5, b =2, c;

    c = a + b;
    printf("(Addition) a + b = %d\n",c);
    c = a - b;
    printf("(Subtraction) a - b = %d\n",c);
    c = a * b;
    printf("(Multiplication) a * b = %d\n",c);
    c = a / b;
    printf("(Division) a / b = %d\n",c);
    c = a % b;
    printf("Remainder when a divided b = %d\n",c);  
    return 0;
}