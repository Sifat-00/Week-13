#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() 
{
    Fast_Io;

    int t;
    cin >> t;
    while (t--) 
    {
        int lines, n, m;
        cin >> lines >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        vector<int> ans;
        int i = 0, j = 0;
        bool flag = true;

        while (i < n || j < m) 
        {
            if (i < n && a[i] == 0) 
            {
                ans.push_back(0);
                lines++;
                i++;
            } 
            else if (j < m && b[j] == 0) 
            {
                ans.push_back(0);
                lines++;
                j++;
            } 
            else if (i < n && a[i] <= lines) 
            {
                ans.push_back(a[i]);
                i++;
            } 
            else if (j < m && b[j] <= lines) 
            {
                ans.push_back(b[j]);
                j++;
            } 
            else 
            {
                flag = false;
                break;
            }
        }

        if (flag) 
        {
            for (auto x : ans) cout << x << " ";
            cout << endl;
        }
        else 
        {
            cout << -1 << endl;
        }
    }
    return 0;
}