#include <stdio.h>
int main()
{
    int n, k, b;
    printf("Enter how many dishes you ate\n");
    scanf("%d", &n);
    printf("Which item Anna did not eat(from 0 based index,0=<k<%d)\n", n);
    scanf("%d", &k);
    int bill[n];
    printf("Enter price of each item\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bill[i]);
    }
    printf("Enter the amount of money that Brian charged Anna for her share of the bill(value should be greater than or equal to sum of all item prices\n");
    scanf("%d", &b);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += bill[i];
    }
    int annaShare = (sum - bill[k]) / 2;
    if (annaShare == b)
    {
        printf("Bon Appetit\n");
    }
    else
    {
        printf("%d\n", b - annaShare);
    }

    return 0;
}