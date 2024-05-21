#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int check_kth_bit_on_or_off(int x, int k)
{
    return ((x >> k) & 1);
}

void print_all_bits(int x)
{
    for (int k = 31; k >= 0; k--)
    {
        if (check_kth_bit_on_or_off(x, k))
        {
            cout << 1;
        }
        else
            cout << 0;
        cout << " ";
    }
    cout << endl;
}

int turn_on_kth_bit(int x, int k)
{
    // in cpp " || " is logical_And operator 
    // and " | " is bitwise_And operator
    return x = x | (1 << k);
}

int turn_off_kth_bit(int x, int k)
{
    // in cpp " && " is logical_And operator 
    // and " & " is bitwise_And operator

    // in cpp " ~ " is logical_not operator 
    return x = x & (~ (1 << k) );
}

int toggle_kth_bit(int x,int k)
{
    // in cpp " ^ " Bitwais Xor operator 
    return x = x ^ (1<<k);
}

int main()
{
    // cout<< check_kth_bit_on_or_off(44,3);
    print_all_bits(44);
    // cout<< turn_on_kth_bit(44,4);
    // cout<< turn_off_kth_bit(44,2);
    
    cout << toggle_kth_bit(44, 3) << '\n';
    return 0;
}