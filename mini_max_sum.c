#include <stdio.h>

long long int find_large(long long int arr[], int n)
{

    long long int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}

long long int find_small(long long int arr[], int n)
{

    long long int small = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}

int main()
{
    // printf("Enter five positive integers\n");
    long long int arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    long long int large = find_large(arr, 5);
    long long int small = find_small(arr, 5);
    printf("%lld %lld\n", sum - large, sum - small);
}
