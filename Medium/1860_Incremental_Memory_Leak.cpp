#include <bits/stdc++.h>
using namespace std;

vector<int> memLeak(int memory1, int memory2)
{
    int i = 1;
    while (i <= memory1 || i <= memory2)
    {
        if (memory1 >= memory2)
            memory1 -= i;
        else
            memory2 -= i;
        i++;
    }

    return {i, memory1, memory2};
}

int main()
{
    // int memory1 = 2, memory2 = 2; // 3,0,1
    int memory1 = 8, memory2 = 11; // 6,0,4

    vector<int> ans = memLeak(memory1, memory2);
    for (int i = 0; i < 3; i++)
        cout << ans[i] << " ";
    return 0;
}

// TC => O(√(memory1 + memory2))
// SC => O(1)