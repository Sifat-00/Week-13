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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int cnt = 0;
        if(n>m)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(a[i]+b[j]<=k) cnt++;
                    else break;
                }
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(b[i]+a[j]<=k) cnt++;
                    else break;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}