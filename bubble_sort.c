#include <stdio.h>
int main()
{

    int n, temp;
    int arr[35];
    // int ptr = arr;
    printf("Enter the number of elements you want to input\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i] );
    }

    return 0;
}