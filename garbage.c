// ///////////////////////// Tym pass ////////////////////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int a=6;
//     a +=9;
//     printf("The size of integer in C is %d \n",sizeof(a));
//     printf("The size of float  in C is %d \n",sizeof(float));
//     printf("The size of char  in C is %d \n",sizeof(char ));
//     printf("The size of double in C is %d \n",sizeof(double));
//     // printf("%d%d%d ",++a,a,a++);
//     return 0;
// }
// ////////////////////////////// If else problem ////////////////////////////////////////////////
// #include <stdio.h>

// int main(){
//      int maths, science;
//         printf("Enter the number you got in maths\n");
//          scanf("%d",&maths);
//         printf("Enter the marks you got in science \n ");
//         scanf("%d",&science);
//         if (maths>33&&science>33)
//         {
//             printf("You got 45 rupees ");

//         }
//         else if (maths>33){
//             printf("You passed in maths and got 15 rupees ");

//         }
//         else if (science>33){
//             printf("You passed in Science and got 15 rupees");
//         }
//         else
//         {
//             printf("Padh le fir aana gift maangne ");

//         }
//     return 0;
// }
//  /////////////////////// Multiplication Table///////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int n,num,i;
//     printf("Enter the number you want to calculate the multiplication table of \n");
//     scanf("%d",&n);
//     printf("Upto\n");
//     scanf("%d",&num);
//     for ( i = 1; i <= num; i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }

//     return 0;
// }
//  /////////////////////// Multiplication Table using while loop //////////////////////////////////
// #include <stdio.h>

// int main(){
//     int n ,num,i=1;
//     printf("Enter the number you want to calculate multiplication table of\n");
//     scanf("%d",&n);
//     printf("Upto\n");
//     scanf("%d",&num);
//     while (i<=num)
//     {

//         printf("%d X %d = %d\n",n,i,n*i);
//         i++;
//     }

//     return 0;
// }
//  /////////////////////// Multiplication Table using do while loop///////////////////////////////////
//  #include <stdio.h>

// int main(){
//     int n ,num,i=1;
//         printf("Enter the number you want to calculate multiplication table of\n");
//             scanf("%d",&n);
//         printf("Upto\n");
//             scanf("%d",&num);
//     do
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//             i++;
//     }   while (i<=num);

//         return 0;

// }
// //////// Write a C program to find whether a given year is a leap year or not////////
// #include <stdio.h>

// int main(){
//     int year;
//      printf("Enter the year \n");
//      scanf ("%d",&year);
//      if (year%4==0){
//          printf("The year is leap year");

//      }
//      else
//      {
//          printf("The year is not a leap year");

//      }

//     return 0;
// }
// ////Write a C program to accept the height of a person in centimeter and categorize the person according to their height////
// #include <stdio.h>

// int main(){
//     int height;
//     printf("Enter your height in centimeter\n");
//     scanf("%d",&height);
//     if (height<=140){
//         printf("You are dwarf");

//     }
//     else if (height>=141&&height<=165)
//     printf("You have normal height\n");
//     else if (height>=166 && height<=215 )
//     printf("Saale Khambe complan thoda kam piya kar\n");

//     else {
//         printf("Please enter a valid number\n");
//     }
//     return 0;
// }
// //Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies//
// #include <stdio.h>

// int main(){
//     float coordinate1, coordinate2;
//     printf("Enter the x coordinate\n");
//     scanf("%f",&coordinate1);
//     printf("Enter the y coordinate\n");
//     scanf("%f",&coordinate2);
//     if (coordinate1>0&&coordinate2>0){
//         printf("The point is in the first quadrant\n");
//     }
//     else if(coordinate1<0&&coordinate2>0)
//     printf("The point is in the second quadrant\n");
//     else if (coordinate1<0&&coordinate2<0)
//     printf("The point is in the third quadrant\n");
// else if (coordinate1==0&&coordinate2==0)
// printf("The point lies on origin\n");
//     else{
//         printf ("The point is in the fourth quadrant\n");
//     }
//     return 0;
// }
// Write a C program to find the eligibility of admission for a professional course based on the following criteria:
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140
// #include <stdio.h>

// int main(){
//     int  maths,phy,chemistry,total;
//     printf("Enter your Maths marks\n");
//     scanf("%d",&maths);
//     printf("Enter your Physics marks\n");
//     scanf("%d",&phy);
//     printf("Enter your Chemistry marks\n");
//     scanf("%d",&chemistry);
//     total=maths+chemistry+phy;
//     if (((maths>=65&&phy>=55&&chemistry>=50)&&total>=190)||(maths+phy)>=140)
//     {
//         printf("You are Eligible");

//     }
//     else{
//         printf("Sorry but you are not Eligible");
//     }

//     return 0;
// }
// /////////////////////////average of numbers//////////////////////////////
// #include <stdio.h>

// int main(){
//     int num=1;
//     int n;
//     float sum=0,x;
//     printf("Enter the numbers you want to calculate the average of\n");
//     scanf("%d",&n);

//    for ( int i = 0; i < n; i++)
//    {
//        printf("Enter number %d\n",num);
//        scanf("%f",&x);
//        num++;
//        sum+=x;

//    }
//    printf("The average is %f",(sum/n));

//     return 0;
// }
// ////////////////////////////Multiplication table /////////////////////////////////////////////////
// #include <stdio.h>

// int main(){
//     int n,upto;
//     printf("Enter the number you want to get the multiplication table of\n");
//     scanf("%d",&n);
//     printf("Upto\n");
//     scanf("%d",&upto);
//     for(int i=1;i<=upto;i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }
// 5. Write a program in C to display the cube of the number upto given an integer. Go to the editor
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// #include <stdio.h>

// int main()
// {
//     int a;

//     printf("Enter the number till you want to display the cubic pattern\n");
//     scanf("%d", &a) ;
//     for (int i=1; i<=a;i++){
//     printf("Number is %d and cube of %d is %d \n",i,i,i*i*i);
//     }
//     return 0;
//  }
// 4. Write a program in C to read 10 numbers from keyboard and find their sum and average. Go to the editor
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000
// #include <stdio.h>

// int main()
// {
//     int n,x;
//     float sum = 0;
//     printf("Enter the numbers you want to calculate the average of :\n");
//     scanf("%d", &n);
//     for (int i = 1; i<=n; i++)
//     {
//         printf("Enter number : %d\n",i);
//         scanf("%d", &x);
//         sum+=x;
//     }
//         printf("The sum is %.2f\n",sum);
//         printf("The average is %.2f\n",(sum/n));
//     return 0;
// }
// ////////////////////////////////////////Write a program in C to find the sum of n numbers ///////////////////////////////////////

// #include <stdio.h>

// int main(){
//   int n,sum=0,x;//x = temp variable
//   printf("Enter the number you want to  calculate the sum of\n");
//   scanf("%d",&n);
//   for (int i = 1; i <= n; i++)
//   {
//     printf("Enter number %d\n",i);
//     scanf("%d",&x);
//     sum+=x;
//   }
//    printf("The sum is %d",sum);
//   return 0;
// }
// ////////////////////7. Write a program in C to display the multipliaction table vertically from 1 to n.///////////////////////////

//                   Test Data :
//                   Input upto the table number starting from 1 : 8
//                   Expected Output :
//                   Multiplication table from 1 to 8
//                   1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
//                   ...
//                   1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80

// #include <stdio.h>

// int main()
// {
//     int n, i, j;
//     printf("Enter the number number you want to vertically get the table of from 1\n");
//     scanf("%d", &n);

//     for (i = 1; i <= 10; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             if (j <= n - 1)
//                 printf("%d X %d = %d , ", j, i, j * i);
//             else
//                 printf(" %d X %d = %d , ", j, i, j * i);
//         }
//         printf("\n");
//     }
//       return 0;
// }

// 8. Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
// Test Data
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100
// #include <stdio.h>

// int main(){
//   int n;
//   int sum=0,x;
//   printf("Enter the terms you want to calculate\n");
//   scanf("%d",&n);
//   printf("The Odd numbers are : ");
//   for (int i=1; i <= n; i++)
//   {
//     printf(" %d ",(2*i-1));
//     sum+=(2*i-1);
//   }
//   printf("\nThe sum is %d ",sum);
//   return 0;
// }

// //////////////////////// Write a program in C to display the pattern like right angle triangle using an asterisk.//////////////////////

// The pattern like :

// *
// **
// ***
// ****
// #include <stdio.h>

// int main(){
//   char c = '*';
//   int n;
//     printf("How many line till the star gets printed\n");
//     scanf("%d",&n);

//   for (int i =1; i <= n; i++)

//   {
//     for (int j = 0; j < i; j++)
//     {
//       printf("%c",c);
//     }
//     printf("\n");
//   }

//   return 0;
// }

// 11. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.

// The pattern like :

//  1
//  22
//  333
//  4444

// #include <stdio.h>

// int main(){
//   int n,i,j;
//   printf("Enter the line number upto you want to print\n");
//   scanf("%d",&n);
//   for ( i = 1; i <= n ; i++)
//   {
//     for ( j = 1; j <= i ; j++)
//     {
//       printf("%d",i);

//     }
//     printf("\n");
//   }

//   return 0;
// }

// 10. Write a program in C to display the pattern like right angle triangle with a number. Go to the editor

// The pattern like :

// 1
// 12
// 123
// 1234

// #include <stdio.h>

// int main(){
//   int n,i,j;
//   printf("Enter the number of rows to display\n");
//   scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//       for ( j = 1; j <= i; j++)
//       {
//         printf("%d",j);
//       }
//       printf("\n");
//     }

//   return 0;
// }
// 12. Write a program in C to make such a pattern like right angle triangle with number increased by 1. Go to the editor

// The pattern like :

//    1
//    2 3
//    4 5 6
//    7 8 9 10
// #include <stdio.h>

// int main(){
//   int n,i,j,k=1;
//   printf("Enter the number of rows to display\n");
//   scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//       for ( j = 1; j <= i; j++)
//       {
//         printf("%d ",k++);
//       }
//       printf("\n");
//     }

//   return 0;
// }
// 16. Write a program in C to display the n terms of even natural number and their sum. Go to the editor
// Test Data :
// Input number of terms : 5
// Expected Output :
// The even numbers are :2 4 6 8 10
// The Sum of even Natural Number upto 5 terms : 30

// #include <stdio.h>

// int main(){
//   int n,i,sum=0;
//   printf("Enter the number of terms even numbers you wish to display\n");
//   scanf("%d",&n);
//   printf("The even numbers are : ");
//   for ( i = 1; i <= n; i++)
//   {
//     printf("%d  ",2*i);
//     sum+=2*i;
//   }
//     printf("\nThe sum is %d",sum);

//   return 0;
// }
// /////////////////Write a program in C to solve a quadratic equation ////////////////////////////////////////
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int a, b, c;
//   float d, x1, x2;
//   printf("Enter the coefficient of x square\n");
//   scanf("%d", &a);
//   printf("Enter the coefficient of x \n");
//   scanf("%d", &b);
//   printf("Enter the constant\n");
//   scanf("%d", &c);
//   d = (b * b) - 4 * a * c;
//   x1 = (-b + sqrt(d))/2*a;
//   x2 = (-b - sqrt(d))/2*a;

//   if (d > 0)
//   {
//     printf("The roots are real and equal to \n %f and %f ", x1, x2);
//   }
//   else if (d == 0)
//   {
//     printf("The roots are real and are equal\nwhich are equal to %f and %f ", x1, x2);
//   }
//   else
//   {
//     printf("The roots are not real");
//   }
//   return 0;
// }

// 25. Write a program in C to display the n terms of square natural number and their sum. Go to the editor
// 1 4 9 16 ... n Terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// The square natural upto 5 terms are :1 4 9 16 25
// The Sum of Square Natural Number upto 5 terms = 55

// #include <stdio.h>

// int main(){
//   int n,i,j,sum=0;
//   printf("Enter the number of terms in the square series\n");
//   scanf("%d",&n);
//   printf("The terms you requested are: ");
//   for ( i = 1; i <= n; i++ )
//   {
//     printf("%d ",i*i);
//     sum+=(i*i);
//   }
//   printf("\n");
//     printf ("The Sum of the above terms is %d",sum);

//   return 0;
// }
// 26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. Go to the editor
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1 + 11 + 111 + 1111 + 11111
// The Sum is : 12345

// #include <stdio.h>

// int main(){
//   int n,i;
//   long int j=1,sum=0;
//   printf("Enter the number of terms you want in the series\n");
//   scanf("%d",&n);
//   printf("The terms you requested are: ");
//   for ( i = 1; i <= n; i++ )
//   {
//     printf("%d ",j);
//     sum+=j;
//     j=(j*10)+1;
//   }
//   printf("\n");
//     printf ("The Sum of the above terms is %d",sum);

//   return 0;
// }
// ///////////Write a program in C to find a number if it is a prime number or not //////////////////////

// #include <stdio.h>

// int main(){
//   int n,x=0;
//   printf("Enter the number : ");
//   scanf("%d",&n);
//   for (int i = 2; i <= n-1; i++)
//   {
//       if(n%i == 0)
//       {
//           x=1;
//           break;
//       }

//   }
//       if (x == 0)
//       {
//           printf("The number entered is a prime number");
//       }
//       else
//       {
//           printf("The number entered is not a prime number");
//       }

//   return 0;
// }

// /////////////////////// OR OR OR  OR OR OR OR OR OR OR OR OR OR OR //////////////////////

// #include <stdio.h>

// int main(){
//     int n,prime=1;
//     printf("Enter the number \n");
//     scanf("%d",&n);
//     for (int i = 2; i*i <= (n); i++)
//     {
//         if (n%i == 0)
//         {
//             prime = 0;

//         }

//     }
//             if (prime == 1)
//             {
//                 printf("The number entered is a prime number");

//             }

//             else
//             {
//                 printf("The number entered is not a prime number ");
//             }

//     return 0;
// }

// 34. Write a program in C to find the prime numbers within a range of numbers. Go to the editor
// Test Data :
// Input starting number of range: 1
// Input ending number of range : 50
// Expected Output :
// The prime number between 1 and 50 are :
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

// #include <stdio.h>

// int main(){
//     int n1,n2,i,j,prime;
//     printf("Enter first number\n");
//     scanf("%d",&n1);
//     printf("Enter second number\n");
//     scanf("%d",&n2);
//     printf("The prime numbers between %d and %d are : \n",n1,n2);

//     for ( i = n1; i <= n2; i++)
//     {
//         prime = 0;
//         for ( j = 2; j < i-1; j++)
//         {
//             if (i % j == 0 )
//             {
//                 prime = 1;
//                 break;
//             }

//         }

//         if (prime == 0)
//             {
//                 printf (" %d  ",i);
//             }
//     }

//     return 0;
// }

// ///////////OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR OR///////////////////////////////////
// ///////////////////////// Using Function Call //////////////////////////////////////////////
// #include <stdio.h>
// int IsPrime(int n)
// {
//     int prime = 0;
//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int n1, n2, i;
//     printf("Enter the first number\n");
//     scanf("%d", &n1);
//     printf("Enter the second number\n");
//     scanf("%d", &n2);
//     printf("The prime numbers are\n");
//     for (i = n1; i < n2; i++)
//     {
//         if (IsPrime(i))
//         {
//             printf("%d  ", i);
//         }
//     }

//     return 0;
// }

// 39. Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9. Go to the editor
// Expected Output :
// Numbers between 100 and 200, divisible by 9 :
// 108 117 126 135 144 153 162 171 180 189 198
// The sum : 1683
// #include <stdio.h>

// int main()
// {
//   int n, sum = 0;
//   printf("Numers between 100 and 200, divisible by 9 :\n");
//   for (int i = 101; i <= 200; i++)
//   {
//     if (i % 9 == 0)
//     {
//       printf("%d ", i);
//        sum += i;
//     }

//   }
//   printf("\nThe sum is : %d ", sum);
//   return 0;
// }
// 49. Write a c program to find out the sum of an A.P. series. Go to the editor
// Test Data :
// Input the starting number of the A.P. series: 1
// Input the number of items for the A.P. series: 10
// Input the common difference of A.P. series: 4
// Expected Output :
// The Sum of the A.P. series are :
// 1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190

// #include <stdio.h>

// int main()
// {
//   int a, d, i, n, terms, sum = 0;
//   printf("Enter the first term of A.P. series\n");
//   scanf("%d", &a);
//   printf("Enter the common difference of the series\n");
//   scanf("%d", &d);
//   printf("Enter the number of terms in the A.P.\n");
//   scanf("%d", &n);
//   terms = a + ((n - 1) * d);
//   sum =(n/2)*((2*a)+(n-1)*d);
//   for (i = a; i <= terms; i += d)
//   {
// if (i != terms)  // Ye if else condition isiliye lagayi kyuki hame last terrm ke baad + print nhi karna tha aur = print karke loop ko khatam karna tha

//     {
//       printf("%d +", i);
//     }
//     else
//     {
//       printf(" %d = %d", i, sum);
//     }
//   }
//   // printf("\nThe sum is %d",sum);

//   return 0;
// }

// 52. Write a program in c to find the Sum of GP series. Go to the editor
// Test Data :
// Input the first number of the G.P. series: 3
// Input the common ratio of G.P. series: 2
// Input the number or terms in the G.P. series: 5
// Expected Output :
// The numbers for the G.P. series:
// 3.000000 6.000000 12.000000 24.000000 48.000000
// The Sum of the G.P. series : 93.000000

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int a,r,n;
//     float sum=0, terms;

//     printf("Enter the first term of G.P. series\n");
//     scanf("%d",&a);
//     printf("Enter the common ratio of the series\n");
//     scanf("%d",&r);
//     printf("Enter the number of terms\n");
//     scanf("%d",&n);
//         terms = (a*pow(r,n-1));
//     for (int i = a; i <= terms; i *= r)
//     {
//         printf("%d    ",i);
//         sum += i;
//     }
//     printf("The sum is %.2f",sum);
//     return 0;
// }
// 21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. Go to the editor
// Test Data :
// Input the number or terms :5
// Expected Output :
// 9 99 999 9999 99999
// The sum of the series = 111105

// #include <stdio.h>

// int main(){
//     int n,sum=0,t=9;// t = terms
//     printf("Enter the number of the terms\n");
//     scanf("%d",&n);
//     for (int  i = 1; i <= n; i++)
//     {
//         sum += t;
//         printf("%d  ",t);
//         t = t*10 + 9;
//     }
//         printf("\nThe sum is %d ",sum);

//         return 0;
// }

// 15. Write a C program to calculate the factorial of a given number. Go to the editor
// Test Data :
// Input the number : 5
// Expected Output :
// The Factorial of 5 is: 120

// #include <stdio.h>

// int main(){
//     int n, f=1;
//     printf("Kiska Factorial nikaalna hai \n");
//     scanf("%d",&n);
//     for (int  i = 1; i <= n; i++)
//     {
//         f*= i;
//     }
//      printf("The value of %d factorial is %d",n,f);
//     return 0;
// }

// 3. Write a program in C to display n terms of natural number and their sum
// #include <stdio.h>

// int main(){
//     int n ,sum=0;
//     printf("Enter the number value\n");
//     scanf("%d",&n);
//     printf("The series is as follows : \n");
//     for (int i = 1 ; i <= n; i++)
//     {
//         printf("%d  ",i);
//         sum+= i;
//     }
//     printf("\nThe sum is %d ",sum);

//     return 0;
// }

// 16. Write a C program to check whether a character is an alphabet, digit or special character. Go to the editor
// Test Data :
// @
// Expected Output :
// This is a special character.

// #include <stdio.h>

// int main(){
//     char c ;
//     printf("Enter the character you want to check is special or not \n") ;
//     scanf("%c",&c);
//     if ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
//     {
//         printf("The character is a Alphabet\n");
//     }
//     else if (c >= '0' && c <= '9')
//     {
//         printf("The character entered is a number\n");
//     }
//     else
//     {
//         printf("The character entered is a special character");
//     }

//     return 0;
// }

// 17. Write a C program to check whether an alphabet is a vowel or consonant. Go to the editor
// Test Data :
// k
// Expected Output :
// The alphabet is a consonant.

// #include <stdio.h>

// int main(){
//     char c ;
//     printf("Enter the Alphabet \n");
//     scanf("%c",&c);
//     if (c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U' )
//     {
//         printf("The Alphabet is a vowel \n");

//     }
//     else
//     {
//         printf("The alphabet entered is a consonant");
//     }

//       return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n1, n2, i, j, prime;
//     printf("Enter the first number\n");
//     scanf("%d", &n1);
//     printf("Enter the second number \n");
//     scanf("%d", &n2);
//     printf("The prime numbers between %d and %d are : \n", n1, n2);
//     for (i = n1; i <= n2; i++)
//     {
//         prime = 0;
//         for (j = 2; j <= i-1; j++)
//         {
//             if (i % j == 0)
//             {
//                 prime = 1;
//             }
//         }
//         if (prime == 0)
//         {
//             printf("%d    ", j);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter the number\n");
//     scanf("%d",&n);
//     switch (n%2)
//     {
//     case 0:
//         printf("The number is an even number\n");
//         break;
//     case 1:
//     printf("The number is odd\n");
//     break;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     switch (num>0)
//     {
//     case 1:
//         printf("The number is a positive number\n");
//         break;
//     case 0:
//             switch (num<0)
//             {
//             case 1:
//                 printf("The number is a negative number\n");
//                 break;

//             default:
//             printf("The number entered is 0\n");
//                 break;
//             }

//     }
//     return 0;
// }

// //////////////////////////////////Game Changerz in the house baby ////////////////////////////////////

// #include <stdio.h>
// int factorial(int n)
// {
//     if (n > 1)
//     {
//         return n * factorial(n - 1);
//     }
//     else
//     {
//         return 1;
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter the number\n");

//     scanf("%d", &n);

//     printf("The factorial of %d is %d", n, factorial(n));
//     return 0;
// }

// //////////////////////////////////Program in C to convert Tempratures to C and F ///////////////////////////////

// #include <stdio.h>

// int main(){
//     float c,f,j;
//     printf("Enter the type of conversion you want to do\n---------------------Press 1 if you want to convert Celsius to Fahrenheit---------------------\n---------------------Press 2 if you want to convert Fahrenheit to celsius---------------------\n");
//     scanf("%f",&j);
//     if (j == 1 )
//     {
//         printf("Enter the value of temprature in celsius\n");
//              scanf("%f", &c);
//          f = (c * 9/5) + 32 ;
//         printf("the value of temprature in fahrenheit is %.2f \n",f);
//     }
//     else if (j== 2 )
//     {
//         printf("Enter the value of temprature in Fahrenheit\n");
//             scanf("%f", &f);
//         c = (f - 32) * 5/9 ;
//         printf("the value of temprature in Celsius is %.2f \n",c);
//     }
//     else
//     {
//         printf("Invalid Number !!!\n");
//     }

//     return 0;
// }
// //////////////////////////////////////////////////////Pointer Arithimetic //////////////////////////////////////////////////
// #include <stdio.h>

// int main()
// {
//     int a = 22;
//     int *ptr = &a;
//     printf("The value of a is %d\n",a);
//     printf("The address of a is %d \n",ptr);
//     printf("The value of a after is %d \n",*ptr);
//     printf("The value  of a after increment is %d\n",a);
//     // a++;
//     // ptr++;
//     printf("The value  of address of a after increment is %d \n",ptr+1);
//     printf("The value of a after increment is %d \n",*ptr+1);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[] = {4,5,9,1,3,8};
//     printf("The Value of the first Element of Array is %d \n",arr[0]);
//     printf("The Value of the second Element of Array is %d \n",arr[1]);
//     printf("The Value of the third Element of Array is %d \n",arr[2]);
//     printf("The address of first element of array is %d \n",arr);
//     // printf("The address of first element of array is %d \n",&arr[0]);
//     printf("The address of the second element of Array is %d \n",arr+1);
//     printf("The value of the second element of Array through pointer arithimetics is  is %d \n",*(arr+4));

//     return 0;
// }

// ////////////////////////////////Arrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrray///////////////////////
// #include <stdio.h>

// int main(){
//     int arr [5];
//     for (int  i = 0; i < 5; i++)
//     {
//         printf("Enter the element %d ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",arr[i]);
//     }

//     return 0;
// }

// /////////////////////////////////Fibonacci Series Using Loops //////////////////////////////
// #include <stdio.h>

// int main()
// {
//     int n, a = 0, b = 1, c;
//     printf("Enter the number of terms you want to print in the Fibonacci Series\n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d  ",a);
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }

// //////////////////////////////////Fibonacci Series using Recursion///////////////////////////////////////

// #include <stdio.h>
// int fibb(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return fibb(n - 1) + fibb(n - 2);
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter the number of terms you want to print in the Fibonaci Series\n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",fibb(i));
//     }

//     return 0;
// }
// ////////////////////////Call by refrence Example by changing the value from the pointer arithimetic ////////////////////////////
// #include <stdio.h>
// void AddSub(int *a, int *b)
// {
//   int temp;
//   temp = *a;
//   *a = *a + *b;
//   *b = temp - *b;
// }

// int main()
// {
//   int a, b;
//   printf("Enter the value of a\n");

//     scanf("%d", &a);

//   printf("Enter the value of b\n");

//     scanf("%d", &b);

//   printf("The value of a and b before call by refrence is %d and %d \n", a, b);

//       printf("Wait for the change\n");

//   AddSub(&a, &b);

//       printf("The value of a and b after call by refrence is %d and %d \n", a, b);

//   return 0;
// }
// ///////////////////////////////////Write a program in C to print stars in normal as well as in reversed order using functions///////////////////////
// //////////////////////////////////Can be written without using functions by simply cut paste in main fuction as well////////////////////////////////
// #include <stdio.h>
// void PrintStar(int n)
// {
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("*");
//     }

//     printf("\n");
//   }
// }
// void ReversePrintStar(int n)
// {
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = i; j <= n; j++) /*for (int j = 1; j <= n-i+1; j++)  This condtion can also be used in iteration*/
//     {
//       printf("*");
//     }

//     printf("\n");
//   }
// }
// int main()
// {
//   int input, n;
//   printf("If you want to print in the normal pattern press 1 or if you want to print in the reversed pattern press 2 of if you want to print in the both ways press 3 \n");
//   scanf("%d", &input);
//   if (input == 1)
//   {
//     printf("You have chosen to print the star pattern in normal pattern\n");
//     printf("Enter the number of rows you want to print in the star pattern\n");
//     scanf("%d", &n);
//     PrintStar(n);
//   }
//   else if (input == 2)
//   {
//     printf("You have chosen to print the star pattern in reversed pattern\n");
//     printf("Enter the number of rows you want to print in the star pattern\n");
//     scanf("%d", &n);
//     ReversePrintStar(n);
//   }
//   else if (input == 3 )
//   {
//     printf("You have chosen to print the star pattern in both ways\n");
//     printf("Enter the number of rows you want to print in the star pattern\n");
//     scanf("%d", &n);
//     PrintStar(n);
//     ReversePrintStar(n);
//   }
//   else
//   {
//     printf("Invalid Request\n");
//   }

//   return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr [4];
//     int *ptr = arr;
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the number %d :  ", i+1);
//         scanf("%d", &arr[i]);
//         ptr ++;
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The number %d is : %d \n", i+1, arr[i]);

//     }

//     return 0;
// }

// /////////////////////////////////Input and output in array from loops/////////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int n_students = 3;
//     int n_subjects = 5;
//     int marks [3][5];
//     for (int  i = 0; i < n_students; i++)
//     {
//         for (int j = 0; j < n_subjects; j++)
//         {
//             printf("Enter the number of student %d in subject %d \n", i+1, j+1);
//             scanf("%d", &marks[i][j]);

//         }

//     }
//     for (int  i = 0; i < n_students; i++)
//     {
//         for (int j = 0; j < n_subjects; j++)
//         {
//             // printf("The number of student %d in subject %d is %d \n", i+1, j+1, marks[i][j]);
//             printf("%d    ",marks[i][j]); //matrix me print krne k liye

//         }
//         printf("\n");

//     }
//     return 0;
// }

// #include <stdio.h>
// void ArrayReversal(int *arr,int n)
// {
//     int temp;
//     for (int i = 0; i < (n/2); i++)
//     {
//         temp = arr [i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }

// }
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     for (int  i = 0; i < 8; i++)
//     {
//         printf("The value of %d element is  %d \n",i+1,arr[i]);
//     }
//     ArrayReversal(arr,8);
//     for (int  i = 0; i < 8; i++)
//     {
//         printf("The value of %d element after array reversal is %d \n",i+1,arr[i]);
//     }

//     return 0;
// }
// ////////////////////////////Programs using function to calculate the positive and negative numbers in an array////////////////////////////
// #include <stdio.h>
// int CountPositiveNumber(int *arr,int n)
// {
//     int countpos = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             countpos++;
//         }
//     }
//     return countpos;
// }
// int CountNegativeNumber(int *arr,int n)
// {
//     int countneg = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             countneg++;
//         }
//     }
//     return countneg;
// }
// int main()
// {
//     int arr[8] = {1, 2, -3, 4, 5, 6, -7, -8};
//     printf("The positive number are = %d \nThe negative numbers are = %d \n", CountPositiveNumber(arr, 8), CountNegativeNumber(arr, 8));
//     return 0;
// }

// ////////////////////Program to print multiplication table of a number taken input from the user using arrays///////////////
// #include <stdio.h>
// int PrintTable(int *arr,int num,int n)
// {
// for (int i = 0; i < num; i++)
//     {
//         arr[i] = n * (i+1);
//     }
//     for (int i = 0; i < num; i++)
//     {
//         printf("%d X %d = %d\n",n,i+1,arr[i]);
//     }
//     return 0;
// }
// int main(){
//     int n,num;
//     int mulTable[10];
//     printf("Enter the number  you want to calculate the multiplication table of\n");
//     scanf("%d",&n);
//     printf("Upto\n");
//     scanf("%d",&num);
//     PrintTable(mulTable,num,n); /*function array lega fir kab tak print krna hai lega fir kis number ke liye print krna hai lega*/
//     return 0;
// }

// ///////////////////////////////// Program to print Varoius multiplication Tables using arrays  /////////////////////////////////////////////
// #include <stdio.h>
// void PrintTable(int *MulTable,int num,int n)
// {
//     printf("The multiplication Table of %d is as follows : \n",num);
//     printf("\n\n");
//     for (int i = 0; i < n; i++)
//     {
//         MulTable[i] = num * (i+1);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("\t\n\t%d X %d = %d\n",num,i+1,MulTable[i]);
//     }
//     printf("\n\n------------------------------------------------\n\n");
// }
// int main(){
//     int MulTable[3][10];
//     PrintTable(MulTable[0],2,10);/*Agar user se input lena hai toh voh value bhi change kr lena variable bana ke */
//     PrintTable(MulTable[1],7,10);
//     PrintTable(MulTable[2],9,10);

//     return 0;
// }

// /////////////////////////////////////////////////////Printing of Addresses in 3 -D Array ////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int arr[2][5][4];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             for (int k = 0; k < 4; k++)
//             {
//             printf("The value of address in [%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);

//             }

//         }

//     }
//     return 0;
// }

// #include <stdio.h>
// //
// int main(){
//     char str[] = {'A','y','u','s','h',' ','B','h','a','i','\0'};//For spaces in character array place a single quote and print a space in between
//     char *ptr = str;
//     while(*ptr != '\0')
//     {
//         printf("%c",*ptr);
//         ptr++;
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
// 	int n = 1;
// 	n= (++n) + (n--)+(--n);
// 	printf("%d\n", n);
// 	return 0;
// }

// #include <stdio.h>

// int main(){
// 	char st[4];
// 	printf("Enter your name\n");
// 	scanf("%s", st);
// 	printf("Your entered name is %s\n",st);

// 	return 0;
// }
//////////////////////////////// C Program to find sum of digits of a number /////////////////////
// #include <stdio.h>
// int main()
// {
//     int n, sum = 0, rem;
//     printf("Enter a number you want to calculate the digits of\n");
//     scanf("%d", &n);
//     if (n > 0)
//     {
//         while (n > 0)
//         {
//             rem = n % 10;
//             sum = sum + rem;
//             n = n / 10;
//         }
//         printf("The sum of digits is  %d", sum);
//     }
//     else
//     {
//         printf("Enter a valid positive number\n");
//     }

//     return 0;
// }

////////////////////////////////////////////////Gets and puts/////////////////////////////////////////

// #include <stdio.h>

// int main(){
// 	char str[99] ;
// 	printf("Enter your name\n");
// 	gets(str);          //ye cheez se puri string ka input aa jayega including spaces
// 	printf("The name is  ");
// 	puts(str);
// 	return 0;
// }

// #include <stdio.h>

// int main(){
// 	char str[5];
// 	str = "Hello";
// 	printf("%s\n", str);
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char st1[32];
//     char str2[32];
//     int l;
//     printf("Enter the name for st1\n");
//     gets(st1);
//     printf("Enter the name for str2\n");
//     gets(str2);
//     printf("Using puts \n");
//     puts(st1);
//     puts(str2);
//     strcat(st1, str2);
//     printf("Now the modified value of st1 is %s \n", st1);
//     l = strlen(st1);
//     printf("The length of st1 is %d\n", l);
//     l = strlen(str2);
//     printf("The length of str2 is %d", l);
//     // printf("%s is a friend of %s", st1, str2);
//     return 0;
// }

//////////////////////////////////Input of a string character by character &&  by using the %s /////////////////////////////

// #include <stdio.h>

// int main(){
//     char st1[20];
//     char st2[20];
//     char c ;
//     int i = 0;
//     printf("Enter the value for the first string\n");
//     scanf("%s",st1);
//     printf("Enter the value for the second string character by character \n");
//     while (c!='\n')
//     {
//         fflush(stdin);  //using fflush(stdin); clears the previous input for scanf
//         scanf("%c",&c);
//         st2[i] = c;
//         i++;
//     }
//     st2[i]= '\0';
//     printf("The value for the First string is %s\n",st1);
//     printf("The value for the second string is %s\n",st2);
//     return 0;
// }
//////////////////////////////////Program in C to check the number of times a character in a string//////////////////////
// #include <stdio.h>
// int CheckCharacter(char st[], char c)
// {
//     int character = 0;
//     char *ptr = st;
//     while (*ptr != '\0')
//     {
//         if (*ptr == c)
//         {
//             character = 1;
//         }
//         ptr++;
//     }
//     //
//     return character;
// }
// int CountCharacter(char st[], char c)
// {
//     int count = 0;
//     char *ptr = st;
//     while (*ptr != '\0')
//     {
//         if (*ptr == c)
//         {
//             count++;
//         }
//         ptr++;
//     }
//     //
//     return count;
// }

// int main()
// {
//     char st[99] = "Test @ check";
//     char c;
//     printf("Enter the charater you want to check in the string : ");
//     scanf("%c", &c);
//     int character = CheckCharacter(st, c);
//     int count = CountCharacter(st, c);
//     if (character == 1)
//     {
//         printf("The following string contains '%c' %d times in it ", c, count);
//     }
//     else
//         (character == 0)
//         {
//             printf("The following string cointains '%c' 0 times in it ", c);
//         }

//     return 0;
// }
//////////////////////////////////To check whether a string is palindrome or not////////////////////////
// #include <stdio.h>

// int main()
// {
//     char string[25], reverse_string[25] = {'\0'};
//     int i, length = 0, pal_char = 0;

//     printf("Enter a string \n");
//     gets(string);
//     for (i = 0; string[i] != '\0'; i++)
//     {
//         length++;
//     }
//     for (i = length - 1; i >= 0; i--)
//     {
//         reverse_string[length - i - 1] = string[i];
//     }

//     for (pal_char = 1, i = 0; i < length; i++)
//     {
//         if (reverse_string[i] != string[i])
//             pal_char = 0;
//     }
//     if (pal_char == 1)
//         printf("%s is a palindrome \n", string);
//     else
//         printf("%s is not a palindrome \n", string);
//         return 0;
// }
/////////////////fscanf(pointer,format_specifier,address);/////////////////////////////
/////////////////fprintf(pointer,string_literal,format_specifier);/////////////////////////////
// #include <stdio.h>

// int main(){
//      int n,l,m;
//      FILE *ptr;
//     ptr = fopen("bablu.txt","r");
//      fscanf(ptr,"%d %d %d",&n,&m,&l);
//      printf("%d\n",n);
//      printf("%d\n",m);
//      printf("%d\n",l);

//     return 0;
// }
///////////////////////////////////////////////DMA Calloc and Realloc//////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(10, sizeof(int));
//     int n, m;
//     printf("Kiska table print karna hai\n");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d x %d = %d\n", n, i + 1, n * (i + 1));
//     }
//     printf("\n");
//     printf("Enter the value till you want to extend\n");
//     scanf("%d", &m);
//     realloc(ptr, m);
//     for (int i = 0; i < m; i++)
//     {
//         printf("%d x %d = %d\n", n, i + 1, n * (i + 1));
//     }

//     return 0;
// }
/////////////////////////////////////////////program to seperate the odd and even elements of an array //////////////////////////////
////////////////////////////////////////////////Can be used for integer array also //////////////////////////////////////////////////

// #include <stdio.h>
// #include <string.h>
// void seperate_elements(char str[])
// {
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%c", str[i]);
//         }
//     }
//     printf(" ");
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%c", str[i]);
//         }
//     }
//     printf("\n");
// }
// int main()
// {

//     int n;
//     char string[55];
//     printf("Enter the number of string you want to enter \n");
//     scanf("%d", &n);
//     printf("Enter you string\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s", string);
//         seperate_elements(string);
//     }

//     return 0;
// }
///////////////////////////////////////preprocessor directives////////////////////////
// #include<stdio.h>
// #define pi 3.14 
// #define square(x) x*x 

// int main (){
//     int n;
//     printf("Enter the value of radius\n");
//     scanf("%d",&n);
//     float area = pi*square(n);
//     printf("The are is %.3f \n",area);
    

// return 0;
// }
