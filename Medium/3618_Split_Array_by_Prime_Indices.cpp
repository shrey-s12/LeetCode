#include <bits/stdc++.h>
using namespace std;

vector<bool> checkPrime(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    return prime;
}

long long splitArray(vector<int> &nums)
{
    int n = nums.size();

    vector<bool> prime = checkPrime(n);
    long long sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++)
    {
        if (prime[i])
            sumA += nums[i];
        else
            sumB += nums[i];
    }

    return abs(sumA - sumB);
}

int main()
{
    // vector<int> nums = {2, 3, 4}; // 1
    // vector<int> nums = {-1, 5, 7, 0}; // 3
    vector<int> nums = {175868717, 841457609, -948571070, -747264172}; // 2713161568

    long long ans = splitArray(nums);
    cout << ans;
    return 0;
}

// TC => O(n log log n + n)
// SC => O(n)

// // Sieve of Eratosthenes
// 🧮 Example: n = 30
// Start: all true except 0 and 1.
// i=2 → mark multiples of 2 (4,6,8,…,30).
// i=3 → mark multiples of 3 (9,12,15,…,30).
// i=4 → already marked false, skip.
// i=5 → mark multiples of 5 (25,30).
// Stop at √30 ≈ 5.

// Remaining true entries:
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 → all primes up to 30 ✅