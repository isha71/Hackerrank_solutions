// Add given numbers
#include <stdio.h>
long int AVeryBigSum(long int arr[], int num)
{
    long sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter how many numbers you want to add (1 - 10)\n");
    scanf("%d", &n);
    long int values[n];
    printf("Enter your values\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &values[i]);
    }

    printf("Sum of given elements is %ld\n", AVeryBigSum(values, n));

    return 0;
}