#include <stdio.h>
void from1700to1917(int n)
{
    if (n % 4 == 0)
    {
        printf("12.09.%d\n", n);
    }
    else
    {
        printf("13.09.%d\n", n);
    }
}

void from1919to2700(int n)
{
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)
    {
        printf("12.09.%d\n", n);
    }
    else
    {
        printf("13.09.%d\n", n);
    }
}

int main()
{
    int n;
    printf("Enter year(from 1700 to 2700)\n");
    scanf("%d", &n);
    if (n >= 1700 && n <= 1917)
    {
        from1700to1917(n);
    }
    else if(n == 1918)
    {
        printf("26.09.%d\n", n);
    }
    else if(n > 1918 && n <= 2700)
    {
        from1919to2700(n);
    }
    return 0;
}