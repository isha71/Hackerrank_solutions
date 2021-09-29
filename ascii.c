#include <stdio.h>
int main()
{
    printf("Enter five characters\n");
    char array[5];
    gets(array);
    for (int i = 0; i < 5; i++)
    {
        printf("ASCII value of %c is %d\n", array[i], array[i]);
    }
    array[0] += 1;
    printf("%c", array[0]);

    return 0;
}
