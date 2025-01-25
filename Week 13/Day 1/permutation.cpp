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
        int n,a,b;
        cin  >> n >> a >> b;
        vector<int>v;
        v.push_back(a);
        for(int i=n;i>=1;i--)
        {
            if(i !=a && i!=b) v.push_back(i);
        }
        v.push_back(b);
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(i<n/2)
            {
                if(v[i] < a)
                {
                    flag = false;
                    break;
                }

            }
            else
            {
                if(v[i]>b)
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) for(auto x : v) cout << x <<" ";
        else cout << -1 ;
        cout << endl;
        
    }

    return 0;
}