
#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int n,cnt = 0;
int flag = 0;
int main()
{
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>ar[i];
    }
    for(int i = 0;i < n -1;i++)
    {
        if(ar[i] == ar[i+1])
        {
        cnt++;
        flag = 1;
        if(ar[i + 1] - ar[i] == 1)
        {
            cnt++;
        }
        }
        else
        flag = 0;

    }
    if(flag == 0)
    {
        cout<<n - cnt;
    }
    if(flag == 1)
    {
        cout<<1;
    }

    return 0;
}