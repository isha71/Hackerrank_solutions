#include <stdio.h>
#define MAXHEIGHT 41
struct box
{
    int length;
    int width;
    int height;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct box units[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &(units[i].length), &(units[i].width), &(units[i].height));
    }
    for (int i = 0; i < n; i++)
    {
        if (units[i].height >= MAXHEIGHT)
        {
            continue;
        }
        else
        {
            printf("%d\n", units[i].length * units[i].width * units[i].height);
        }
    }

    return 0;
}