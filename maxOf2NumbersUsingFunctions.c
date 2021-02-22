#include <stdio.h>
int maxOf2Numbers(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
int main(){
    int a,b,max;
     printf("Enter the first number\n");
     scanf("%d",&a);
     printf("Enter the second number\n");
     scanf("%d",&b);
     max = maxOf2Numbers(a,b);
    //  printf("The maximum of %d and %d is %d",a,b,max);
    printf("The max of %d and %d is %d",a,b,max);
    return 0;
}