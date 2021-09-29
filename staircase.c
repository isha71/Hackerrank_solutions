// making stairase
#include <stdio.h>
void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            printf(" ");
        }
        for(int k = i; k >= 1; k--){
            printf("# ");
        }
        printf("\n");

    }
}

int main()
{
    int n;
    printf("Enter you input to make staircase(1 - 100)\n");
    scanf("%d", &n);
    staircase(n);

    return 0;
}