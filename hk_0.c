// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     // Declare a variable named 'input_string' to hold our input.
//     char input_string[105]; 
    
//     // Read a full line of input from stdin and save it to our variable, input_string.
//     scanf("%[^\n]", input_string); 
    
//     // Print a string literal saying "Hello, World." to stdout using printf.
//     printf("Hello, World.\n");
    
//     // TODO: Write a line of code here that prints the contents of input_string to stdout.
//     printf("%s", input_string);
    
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
///////////////////////Array Reversal///////////////
// #include <stdio.h>

// int main(){
//      int a,temp;
//      int arr[100];
//      scanf("%d",&a);
//      for(int i=0; i<a; i++)
//      {
//         scanf("%d",&arr[i]);
//      }
//     for (int i = 0; i < (a/2); i++)
//     {
//         temp = arr [i];
//         arr[i] = arr[a-i-1];
//         arr[a-i-1] = temp;
//     }
//     for (int  i = 0; i < a; i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }