#include <stdio.h>
int main()
{
    int s, d, m, possibleWays = 0;
    printf("Enter how many chocolate bar squares you have\n");
    scanf("%d", &s);
    // printf("%d", s);
    printf("Enter integers written on these bars (1 to 5)\n");
    int array[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &array[i]);
        // printf("The value is %d\n", array[i]);
    }
    printf("Enter ron birth day and birth month\n");
    scanf("%d %d", &d, &m);
    // printf("The value of d and m is %d %d\n", d, m);
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        int k = i;
        for (int j = m; j >= 1; j--)
        {
            sum += array[k];
            k++;
        }
        if (sum == d)
        {
            possibleWays++;
        }
        sum = 0;
    }
    printf("Total no. of ways lily can share chocolate bar to ron is %d", possibleWays);
    return 0;
}