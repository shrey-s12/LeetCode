#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address)
{
    int n = address.size();
    int index = 0;
    string ans;

    while (index < n)
    {
        if (address[index] == '.')
            ans += "[.]";
        else
            ans += address[index];

        index++;
    }

    return ans;
}

int main()
{
    string address = "1.1.1.1";

    string ans = defangIPaddr(address);
    cout << ans;

    return 0;
}

// O/P -> 1[.]1[.]1[.]1