#include <stdio.h>

void sort(int *ptr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int arr[5], i;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, 5);

    printf("Sorted array: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}
