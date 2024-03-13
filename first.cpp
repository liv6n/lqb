#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //冶炼金属
    //暴力解法
    /*    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i = 0;i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i = 1;i < 1e6; i++)
    {
        bool flag = true;
        for(int j = 0;j < n; j++)
        {
            if(b[j] != a[j] / i)
            {
            flag = false;
            break;
            }

        }
        if(flag)
        {
            cout<<i<<' ';
            break;
        }
    }
    for(int i = 1e6;i >= 1; i--)
    {
        bool flag = true;
        for(int j = 0;j < n; j++)
        {
            if(b[j] != a[j] / i)\
            {
            flag = false;
            break;
            }

        }
        if(flag)
        {
            cout<<i<<' ';
            break;
        }
    }
    */

    return 0;
}


