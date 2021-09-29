#include <stdio.h>
void plus_minus(int arr[], int n)
{
    int positive = 0, negative = 0, zero = 0;
    for (int m = 0; m < n; m++)
    {
        if (arr[m] > 0)
        {
            positive += 1;
        }
        else if (arr[m] < 0)
        {
            negative += 1;
        }
        else
        {
            zero += 1;
        }
    }
    printf("%.6f\n%.6f\n%.6f\n", (float)positive / n, (float)negative / n, (float)zero / n);
}

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    for (int m = 0; m < n; m++)
    {
        scanf("%d", &arr[m]);
    }
    plus_minus(arr, n);
    return 0;
}