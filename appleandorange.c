// Counting no. of apples and oranges falling on Sam's house..
#include <stdio.h>
int main()
{
    int s, t, a, b, m, n;

    int noOfOranges = 0;
    int noOfApples = 0;
    printf("Enter value of s (starting point of Sam's house location)\n");
    scanf("%d", &s);
    printf("Enter value of t (ending location of Sam's house location)\n");
    scanf("%d", &t);
    printf("Enter value of a (location of the Apple tree)\n");
    scanf("%d", &a);
    printf("Enter value of b (location of the Orange tree)\n");
    scanf("%d", &b);
    printf("Enter value of m (no. of apples fall from tree)\n");
    scanf("%d", &m);
    printf("Enter value of n (no. of oranges fall from tree)\n");
    scanf("%d", &n);
    int apples[m];
    int oranges[n];
    printf("Enter distances of each apple falls from point a\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &apples[i]);
    }
    printf("Enter distances of each orange falls from point b\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &oranges[i]);
    }
    for (int i = 0; i < m; i++)
    {

        int value = a + apples[i];
        if (value >= s && value <= t)
        {
            noOfApples++;
        }
    }
    for (int i = 0; i < n; i++)
    {

        int value = b + oranges[i];
        if (value <= t && value >= s)
        {
            noOfOranges++;
        }
    }
    printf("No. of apples fall on Sam's house is %d\nNo. of oranges fall on Sam's house is %d\n", noOfApples, noOfOranges);

    return 0;
}