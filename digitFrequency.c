// counting digits(0 - 9) frequency.
#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    printf("Enter a string containing only digits and alphabets\n");
    char string[1000];
    gets(string);
    int len = strlen(string);
    // printf("Lenght of string is %d\n", len);
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    for (int i = 0; i < 10; i++)
    {
        int asciiOfNumber = numbers[i];
        count = 0;
        for (int j = 0; j < len; j++)
        {
            int asciiOfString = string[j];
            // printf("ascii value of %c is %d\n", string[j], asciiOfString);

            if (asciiOfString == asciiOfNumber)
            {
                count++;
                // printf("%d\n", count);
            }
        }
        printf("Total %d in string is %d\n",i, count);
        // printf("ascii value of %c is %d\n", numbers[i], asciiOfNumber);
    }
    return 0;
}