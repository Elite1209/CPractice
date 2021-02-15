// #include <stdio.h>

// void main(){

//     int num,i,ctr=0;
//     printf("Input  a number: ");
//     scanf("%d",&num);
//     for(i=2;i<=num/2;i++){
//         if(num % i==0){
//          ctr++;
//             break;
//         }
//     }
//    if(ctr==0 && num!= 1)
//         printf("%d is a prime number.\n",num);
//    else
//       printf("%d is not a prime number",num);
// }
// #include <stdio.h>
// #include <math.h>

// void main(){

//     int a,d,n,i,terms;
//     int s1=0;

//      printf("\n\n  Find out the sum of A.P. series :\n ");
//      printf("----------------------------------------\n");

//     printf("Enter the first number of the A.P. series ");
//     scanf("%d",&a);

//     printf("Enter the common difference of A.P. series: ");
//     scanf("%d",&d);

//     printf("Enter the number of items for  the A.P. series: ");
//     scanf("%d",&n);

//     // s1 = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
//     terms = a + (n-1) * d;
//     printf("\nThe terms of A.P. are : \n");

//     for(i=a;i<=terms; i= i + d ){
//         //  if (i != terms)
//              printf("%d ",i);
//         //  else
//         //      printf("%d = %d \n\n",i,s1);
//     }

// }

// ///////////////////////Asterisk patterns for given input ///////////////////////////////
// #include <stdio.h>

// int main(){
//     char c ='*';
//     int n;
//      printf("Kab tak Print karna hai \n");
//      scanf("%d",&n);
//      for (int i = 1; i <= n; i++)
//      {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c",c);
//         }
//         printf("\n");
//      }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n,k=1;
//     printf("Kab tak \n");
//     scanf("%d",&n);
//     for (int i = 1; i <= n ;i++)
//     {
//         for (int j = 1; j<=i; j++)
//         {
//             printf("%d ",k++);
//         }
//         printf(" \n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     int num1, num2, i, j, flag, temp, count = 0;
//     printf("Enter the value of num1 and num2 \n");
//     scanf("%d %d", &num1, &num2);
//     if (num2 < 2)
//     {
//         printf("There are no primes upto %d\n", num2);
//         exit(0);
//     }
//     printf("Prime numbers are \n");
//     temp = num1;
//     if (num1 % 2 == 0)
//     {
//         num1++;
//     }
//     for (i = num1; i <= num2; i = i + 2)
//     {
//         flag = 0;
//         for (j = 2; j <= i / 2; j++)
//         {
//             if ((i % j) == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             printf("%d\n", i);
//             count++;
//         }
//     }
//     printf("Number of primes between %d & %d = %d\n", temp, num2, count);
// }

// #include <stdio.h>

//     int isPrime(int n ) 
//     {
//         for (int i = 2; i <= n-1; i++)
//         {
//             if (n%i == 0)
//             {
//                 break;
//             }
//             return 1;
//         }
        
//     }
// int main(){
//     int start,end;
//     printf("Enter First number\n ");
//     scanf("%d",&start);
//     printf("Enter the second number\n");
//     scanf("%d",&end);

//     for (int i = start; i <= end; i++)
//     {
//         if (isPrime(i))
//         {
//             printf("%d  ", i);
//         }

        
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int i, j, rows;

//     /* Input number of rows from user */
//    printf("Enter number of rows : \n");
//     scanf("%d", &rows);

//     /* Iterate through rows */
//     for(i=1; i<=rows; i++)
//     {
//         /* Iterate through columns */
//         for(j=i; j<=rows; j++)
//         {
//             printf("*");
//         }
       
//         /* Move to the next line */
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main(){
    int f, n;
    int number[f];
    printf("Enter the number of terms of the array \n");
    scanf("%d",&n);
    printf("Enter the %d elements of the array\n");
    for (int i = 0; i < f; i++)
    {
        scanf("%d",&number[f]);
    }
    for (int j = 0; j < f; j++)
    {
        printf("%d",number[f]);
    }
    


    return 0;
}