#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many birds you sighted(value >= 5)\n");
    scanf("%d", &n);
    printf("Enter the type id of each bird (1-5)\n");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int count = 0, maxSight = 0, highest;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == array[j])
            {
                count++;
            }
        }
        if (count > maxSight)
        {
            highest = i;
            maxSight = count;
        }
        else
        {
            if (count == maxSight)

                highest = i - 1;
        }
        count = 0;
    }
    printf("The id of the most frequently sighted type bird is %d\n", highest);
    return 0;
}