#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    string s;

    cin >> s;

    if(s[0] == s[1] && s[1] == s[2])
    {
        cout << "Won" << endl;
    }
    else  
    {
        cout << "Lost" << endl;
    }


return 0;
}
