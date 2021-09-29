// add numbers
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter how many numbers you want to add\n");
    scanf("%d", &num);
    printf("Enter values\n");
    int arr[num];
    for (int a = 1; a <= num; a++)
    {
        scanf("%d", &arr[a]);
        sum = sum + arr[a];
    }
    printf("%d", sum);
}
