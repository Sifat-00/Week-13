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
        string ar;
        cin >> ar;
        int left = 0, right = 0, down = 0 , up = 0;

        for(auto x : ar)
        {
           if(x == 'R') right++;
            else if(x == 'L') left++;
            else if(x == 'U') up++;
            else down++;
        }
        if(left ==0)
        {
            if(up>0 && down >0)
            {
                cout << 2  << endl << "DU" << endl;
                continue;
            }
            else 
            {
                cout << 0 << endl;
                continue;
            }
        }
        else if (right == 0) 
        {
            if (up > 0 && down > 0) 
            {
                cout << 2  << endl << " DU" << endl;
                continue;
            } 
            else
            {
                cout << 0 << endl;
                continue;
            }
        }
        else if(up ==0 || down ==0)
        {
            cout << 2 << endl;
            cout << "LR" << endl;
            continue;
        }
         string ans;
            int s1 = min(up,down);
            int s2 = min(left,right);
            if(s1>s2)
            {
                for(int i=0;i<s1;i++)
                {
                    ans+="U";
                }
                for(int i=0;i<s2;i++) ans+="L";
                for(int i=0;i<s1;i++)
                {
                    ans+="D";
                }
                for(int i=0;i<s2;i++) ans+="R";
            }
            else
            {
                for(int i=0;i<s2;i++)
                {
                    ans+="L";
                }
                for(int i=0;i<s1;i++) ans+="D";
                for(int i=0;i<s2;i++) ans+="R";
                for(int i=0;i<s1;i++) ans+="U";
            }
            cout << ans.size() << endl;
            for(auto x : ans) cout << x ;
            cout << endl;
        
        
    }
    return 0;
}
