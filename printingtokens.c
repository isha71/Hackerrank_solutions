// Given a sentence, print each word of the sentence in a new line.
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter any sentence\n");
    char sentence[1000];
    gets(sentence);
    int len = strlen(sentence);
    for (int i = 0; i < len; i++)
    {
        if (sentence[i] != ' ')
        {
            printf("%c", sentence[i]);
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}