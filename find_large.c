#include <stdio.h>
void find_large(int arr[], int n)
{
    int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest between them is %d\n", large);
}

void find_small(int arr[], int n)
{
    int small = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("Smallest between them is %d\n", small);
}

int main()
{
    int n;
    printf("How many numbers you want to enter\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    do
    {
    again:
        printf("Press 1 if you want to find largest among them\nPress 2 if you want to find smallest among them\nPress 3 to exit the program\n");
        scanf("%d", &m);
        if (m == 1)
        {
            find_large(arr, n);
        }
        else if (m == 2)
        {
            find_small(arr, n);
        }
        else if (m == 3)
        {
            goto end;
        }

        else
        {
            printf("Wrong choice!\n");
            goto again;
        }
    } while (m != 3);
end:

    return 0;
}
