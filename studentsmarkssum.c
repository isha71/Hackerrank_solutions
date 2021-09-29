// Calculating sum of marks of boys(marks at even no. index) and sum of marks of girls(marks at odd no. index).
#include <stdio.h>
void SumOfMarksForBoys(int marks[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += marks[i];
        }
        // printf("----%d\n", sum);
    }
    printf("Sum of marks for boys is %d\n", sum);
}

void SumOfMarksForGirls(int marks[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("Mark = %d\n" , marks[i]);
        if (i % 2 != 0)
        {
            sum += marks[i];
            // printf("%d %d %d\n", sum, marks[i], i);
        }
    }
    printf("Sum of marks for girls is %d\n", sum);
}

int main()
{
    int n;
    char gender;
    printf("Enter total no. of students\n");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Enter gender b for boy and g for girl\n");
    scanf("\n");
    scanf("%c", &gender);
    if (gender == 'b')
    {
        SumOfMarksForBoys(marks, n);
    }
    else
    {
        if (gender == 'g')
        {
            SumOfMarksForGirls(marks, n);
        }
    }

    return 0;
}