//working of Logical operator
#include<stdio.h>
int main()
{
    int a = 10, b = 10, c = 20, result;
    printf("a = %d, b = %d, c = %d \n\n",a,b,c);

    result = (a==b) && (b<c);
    printf("(a==b) && (b<c) is %d\n",result);

    result = (a==b) && (b>c);
    printf("(a==b) && (b>c) is %d\n",result);

    result = (a==b) || (b<c);
    printf("(a==b) || (b<c) is %d\n",result);

    result = (a!=b) || (b==c);
    printf("(a!=b) || (b==c) is %d\n",result);

    result = (a != b);
    printf("(a!=b) is %d\n",result);
    
    result = (a != c);
    printf("(a!=c) is %d\n",result);
    return 0;
}