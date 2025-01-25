#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int main()
{
    Fast_Io;

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        int mx = ar[n-1] - ar[0];
        for(int i=1;i<n;i++)
        {
            mx = max(mx,(ar[i-1] - ar[i]));
        }
        for(int i=1;i<n;i++)
        {
            mx = max(mx,ar[i] - ar[0]);
        }
        for(int i=0;i<n-1;i++)
        {
            mx = max(mx,(ar[n-1] - ar[i]));
        }
        cout << mx << endl;
    }

    return 0;
}