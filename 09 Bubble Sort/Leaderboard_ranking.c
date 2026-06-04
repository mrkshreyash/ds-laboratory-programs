#include <stdio.h>
#include <string.h>

struct Player
{
    char name[30];
    int score;
};

void rankPlayers(struct Player p[], int n)
{
    struct Player temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // Sort in DESCENDING order (Highest score first)
            if (p[j].score < p[j + 1].score)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main()
{
    struct Player leaderboard[] = {
        {"Player_A", 450},
        {"Player_B", 980},
        {"Player_C", 720},
        {"Player_D", 850}};
    int n = 4;

    rankPlayers(leaderboard, n);

    printf("--- Current Leaderboard ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Rank %d: %s - %d pts\n", i + 1, leaderboard[i].name, leaderboard[i].score);
    }

    return 0;
}