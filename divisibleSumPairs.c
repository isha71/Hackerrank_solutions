#include <stdio.h>
int main()
{
    int n, k, pairs = 0;
    printf("Enter value of n(2-100)\n");
    scanf("%d", &n);
    printf("Enter value of k(1-100)\n");
    scanf("%d", &k);
    int array[n];
    printf("Enter integers\n");
    for (int m = 0; m < n; m++)
    {
        scanf("%d", &array[m]);
    }
    for (int m = 0; m < n - 1; m++)
    {
        for (int p = m + 1; p < n; p++)
        {
            int sum = array[m] + array[p];
            if (sum % k == 0)
            {
                printf("%d %d\n", array[m], array[p]);
                pairs++;
            }
        }
    }
    printf("Total no. of pairs where (i < j) whose sum is divisible by %d is %d", k, pairs);
    return 0;
}