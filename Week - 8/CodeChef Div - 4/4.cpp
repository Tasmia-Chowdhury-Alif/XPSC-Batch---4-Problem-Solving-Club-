#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(ll n) {
    if(n<10)
        return n*(n+1)/2;
    ll d = 0;
    ll p = 1;
    ll temp = n;
    while(temp >= 10) {
        temp /= 10;
        p *= 10;
        d++;
    }
    ll msd = n/p;
    return msd*sum(p-1) + ((msd*(msd-1))/2)*p + msd*(1+n%p) + sum(n%p);
}

int main() {
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << sum(n) << endl;
    }
    return 0;
}
