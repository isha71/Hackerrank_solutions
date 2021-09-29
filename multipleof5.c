#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    if(n % 10 == 0 || n % 10 == 5){
        printf("%d is a multiple of 5\n", n);
    }
    else{
        printf("%d is not a multiple of 5\n, n");
    }
    return 0;
}