// You have to figure out a way to get both kangaroos at the same location at the same time, if it is possible, return YES, otherwise return NO.
#include <stdio.h>
void kangaroo(int x1, int v1, int x2, int v2)
{
    if (x2 < x1)
    {
        int swap = x1;
        x1 = x2;
        x2 = swap;
        int swap2 = v1;
        v1 = v2;
        v2 = swap2;
    }
    int k1 = x1 + v1, k2 = x2 + v2;
    if (k1 == k2)
    {
        printf("YES\n");
    }
    else
    {
        do
        {
            k1 += v1;
            k2 += v2;
        } while (k1 < k2);
        if (k1 == k2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
int main()
{
    int x1, x2, v1, v2;
    printf("Enter ist kangaroo position with his speed\nThen second kangaroo position wuth his speed\n");
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    kangaroo(x1, v1, x2, v2);
    return 0;
}