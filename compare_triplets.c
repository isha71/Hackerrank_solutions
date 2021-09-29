#include <stdio.h>
int main()
{
    int alice_score = 0, bob_score = 0;
    printf("Enter your rating (on scale 1 - 100) for three categories : problem clarity, originality, and difficulty\n");
    printf("First enter for Alice's problem\n");
    int alice[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &alice[i]);
    }
    printf("Now enter for bob's problem\n");
    int bob[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &bob[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (alice[i] < bob[i])
        {
            bob_score++;
        }
        else if (alice[i] > bob[i])
        {
            alice_score++;
        }
    }
    printf("Alice's score after comparison is %d\n", alice_score);
    printf("Bob's score after comparison is %d\n", bob_score);
    printf("%d %d\n", alice_score, bob_score);

    return 0;
}