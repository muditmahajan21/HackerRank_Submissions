#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll t = 0; t < test; t++)
    {
        ll i, j, k, n, temp, count = 0, ans = 0;
        ll arr[n];
        cin >> n;
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        
        cout << "Case #" << t + 1 << ": " << ans << endl;
    }

return 0;
}
