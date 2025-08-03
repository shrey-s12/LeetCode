#include <bits/stdc++.h>
using namespace std;

int calculateScore(vector<int> &player)
{
    int n = player.size();
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i >= 1 && player[i - 1] == 10) || (i >= 2 && player[i - 2] == 10))
            score += 2 * player[i];
        else
            score += player[i];
    }
    return score;
}

int isWinner(vector<int> &player1, vector<int> &player2)
{
    int score1 = calculateScore(player1);
    int score2 = calculateScore(player2);

    if (score1 == score2)
        return 0;
    else if (score1 > score2)
        return 1;
    else
        return 2;
}

int main()
{
    vector<int> player1 = {5, 10, 3, 2};
    vector<int> player2 = {6, 5, 7, 3};

    int ans = isWinner(player1, player2);
    if (ans == 0)
        cout << "Match Draw!";
    else if (ans == 1)
        cout << "Player1 Win!";
    else
        cout << "Player2 Win!";

    return 0;
}