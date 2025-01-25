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
        int h,x,n;
        cin >> h >> x >> n;
        
         while(x-- && h>0)
            {
                int val = h/2;
                val = val+10;
                if(val<h) h =val;
                else break;
                 
            }
           while(n-- && h>0) h-=10;
           
            if(h<=0) cout << "YES" << endl;
            else cout << "NO" << endl;
        

    }

    return 0;
}
