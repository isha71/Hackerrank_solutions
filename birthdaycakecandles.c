// Calculating total large height candles..
#include <stdio.h>
int tallest_candles(int candle_heights[], int n)
{
    int find_large = candle_heights[0];
    int tallest_candles = 0;
    for (int i = 1; i < n; i++)
    {
        if (find_large <= candle_heights[i])
        {
            find_large = candle_heights[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (find_large == candle_heights[i])
        {
            tallest_candles++;
        }
    }
    return tallest_candles;
}

int main()
{
    int n;
    printf("Enter child's age\n");
    scanf("%d", &n);
    int candle_heights[n];
    printf("Enter candles heights (cake will have one candle for each year of their total age)\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &candle_heights[i]);
    }
    int total = tallest_candles(candle_heights, n);
    printf("Total large height candles are %d\n", total);

    return 0;
}