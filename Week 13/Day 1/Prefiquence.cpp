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
        int n,m;
        cin >> n  >> m;
        string a,b;
        cin >> a >> b;
        int cnt = 0;
        int i=0;
        for(int j=0;j<m;j++)
        {
            if(a[i] == b[j])
            {
                 cnt++;
                 i++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}