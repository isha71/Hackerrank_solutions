// Converts time format from 12 hour format to 24 hour format..
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter time in 12 hour format(hh:mm:ssAM/PM)\n");
    char time[10];
    gets(time);
    if (time[8] == 'A')
    {
        if (time[0] == '1' && time[1] == '2')
        {
            time[0] = '0';
            time[1] = '0';
        }
    }
    else
    {
        if (time[0] == '0' || time[1] != '2')
        {
            time[0] += 1;
            time[1] += 2;
        }
    }
    time[8] = '\0';
    puts(time);
    return 0;
}