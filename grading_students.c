// Calculating rounding off grades of student..
#include <stdio.h>
void grading_students(int grades[], int n)
{
    int add;

    for (int i = 0; i < n; i++)
    {
        if (grades[i] < 38)
        {
            continue;
        }
        else
        {
            add = grades[i];
            do
            {
                add++;
                if (add % 10 == 0 || add % 10 == 5)
                {
                    break;
                }
                else
                {
                    continue;
                }
            } while (1);
            if (add - grades[i] < 3)
            {
                grades[i] = add;
            }
            else
            {
                grades[i] = grades[i];
            }
        }
    }
    printf("Grades after rounding off\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", grades[i]);
    }
}

int main()
{
    int n;
    printf("Enter no. of students\n");
    scanf("%d", &n);
    int grades[n];
    printf("Enter their grades\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &grades[i]);
    }
    grading_students(grades, n);

    return 0;
}
