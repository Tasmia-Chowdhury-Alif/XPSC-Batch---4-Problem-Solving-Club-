#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i=0; i<N; i++)
            cin >> A[i];

        map<int, int> last_occurrence;
        for(int i=0; i<N; i++)
            last_occurrence[A[i]] = i;

        set<int> s;
        vector<int> B;
        int j = 0;
        for(int i=0; i<N; i++) {
            s.insert(A[i]);
            while(j<N && s.count(A[j]) && last_occurrence[A[j]] == j) {
                B.push_back(A[j]);
                s.erase(A[j]);
                j++;
            }
        }

        for(int i=0; i<N; i++)
            cout << B[i] << " ";
        cout << "\n";
    }

    return 0;
}



// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }