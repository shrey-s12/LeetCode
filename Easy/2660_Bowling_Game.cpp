#include <bits/stdc++.h>
using namespace std;

int isWinner(vector<int> &player1, vector<int> &player2)
{
    int n = player1.size();
    int score1 = player1[0];
    if (n > 1 && score1 == 10)
        score1 += 2 * player1[1];
    else if (n > 1 && score1 != 10)
        score1 += player1[1];

    int score2 = player2[0];
    if (n > 1 && score2 == 10)
        score2 += 2 * player2[1];
    else if (n > 1 && score2 != 10)
        score2 += player2[1];

    for (int i = 2; i < n; i++)
    {
        if (player1[i - 1] == 10 || player1[i - 2] == 10)
            score1 += 2 * player1[i];
        else
            score1 += player1[i];

        if (player2[i - 1] == 10 || player2[i - 2] == 10)
            score2 += 2 * player2[i];
        else
            score2 += player2[i];
    }

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