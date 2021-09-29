/* There will be two arrays of integers. Determine all integers that satisfy the following two conditions:
1. The elements of the first array are all factors of the integer being considered
2. The integer being considered is a factor of all elements of the second array*/
#include <stdio.h>
int large_among_array1(int array1[], int n)
{
    int large = 1;
    for (int i = 0; i < n; i++)
    {
        if (array1[i] >= large)
        {
            large = array1[i];
        }
    }
    return large;
}
int main()
{
    int n, m;
    printf("Enter n and m (1 - 10)\n");
    scanf("%d", &n);
    scanf("%d", &m);
    int array1[n];
    int array2[m];
    printf("Enter elements of both array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &array2[j]);
    }
    int large = large_among_array1(array1, n);
    int total = 0;
    int b = 1;
    int value1;
    int value2;
    do
    {
        int a = large * b;
        for (int i = 0; i < m; i++)
        {
            if (array2[i] >= a)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        }
    end:
        break;
    start:
        for (int i = 0; i < n; i++)
        {
            if (a % array1[i] == 0)
            {
                value1 = 1;
                continue;
            }
            else
            {
                value1 = 0;
                break;
            }
        }
        if (value1 == 1)
        {
            for (int i = 0; i < m; i++)
            {
                if (array2[i] % a == 0)
                {
                    value2 = 1;
                    continue;
                }
                else
                {
                    value2 = 0;
                    break;
                }
            }
            if (value2 == 1)
            {
                total++;
            }
        }
        b++;
    } while (1);
    printf(" %d numbers are there for which each element of array1 is a factor and each element elements of array2 is a multiple\n", total);
    return 0;
}
