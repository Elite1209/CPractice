#include <stdio.h>

int main()
{
    int arr1[100];
    int i, max, min, n;

    printf("Enter the number of elements you want to enter in an array: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &arr1[i]);
    }

    max = arr1[0];
    min = arr1[0];

    for (i = 0; i < n; i++)
    {
        if (arr1[i] > max)
        {
            max = arr1[i];
        }

        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }
    printf("The maximum element of the array is  : %d\n", max);
    printf("The minimum element of the array is: %d\n", min);
    return 0;
}
