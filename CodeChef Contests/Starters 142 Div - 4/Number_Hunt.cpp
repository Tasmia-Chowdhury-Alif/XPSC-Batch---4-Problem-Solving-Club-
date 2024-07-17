// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(long long num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

bool isPerfectSquare(long long num) {
    long long root = sqrt(num);
    return root * root == num;
}

bool noFactorLessThanX(long long Y, long long X) {
    for (long long i = 2; i < X; ++i) {
        if (Y % i == 0) {
            return false;  // Found a factor less than X
        }
    }
    return true;  // No factors less than X were found
}

long long findSmallestY(long long X) {
    long long Y = X;
    while (true) {
        if (!isPrime(Y) && !isPerfectSquare(Y) && noFactorLessThanX(Y, X)) {
            return Y;
        }
        ++Y;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long Y = findSmallestY(n);
        cout << Y << endl;
        
    }
    return 0;
}
// Alhamdulillah