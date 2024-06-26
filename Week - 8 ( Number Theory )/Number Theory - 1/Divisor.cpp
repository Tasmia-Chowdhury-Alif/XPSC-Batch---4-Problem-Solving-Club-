// Bismillah 
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin>>n;

    vector<int> divisor ;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0 )
        {
            divisor.push_back(i);
            if(n/i != i)
            {
                divisor.push_back(n/i);
            }
        }
    }

    sort(divisor.begin(), divisor.end());

    for(int x : divisor)
    {
        cout<<x<<" ";
    }
    cout<<"\n"<<divisor.size()<<endl;
    return 0;
}
// Alhamdulillah 