#include <stdio.h>
void  call(int *a);

    int main()
{
    int a = 10;
    printf("The value of a before function call is %d\n", a);
     call(&a);
        printf("The value of a after function call is %d\n", a);
    return 0;
}

void  call(int*a)
{
    *a= *a *10;
}