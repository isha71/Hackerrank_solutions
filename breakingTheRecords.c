// Return an array with the numbers of times she broke her records. Index 0 is for breaking most points records, and index 1 is for breaking least points records.
#include <stdio.h>
int main()
{
    int n;
    int maxCount = 0, minCount = 0;
    printf("Enter how many games you played\n");
    scanf("%d", &n);
    int scores[n];
    printf("Enter scores of each game\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }
    int highestScore = scores[0];
    int lowestScore = scores[0];
    for (int i = 1; i < n; i++)
    {
        if (scores[i] > highestScore)
        {
            highestScore = scores[i];
            maxCount++;
        }
        else if (scores[i] < highestScore && scores[i] < lowestScore)
        {
            lowestScore = scores[i];
            minCount++;
        }
    }
    printf("%d no. of times she breaks her highest score\n%d no. of times she breaks her lowest score\n", maxCount, minCount);

    return 0;
}