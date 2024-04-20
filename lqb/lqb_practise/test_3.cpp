#include<bits/stdc++.h>
#define P 200005
#define int long long
using namespace std;

char s[P];
int n,q;
string st;
void solve(char s[],int l,int r,int k)
{
    int mid,le,ri;//二分
    mid = st.size() / 2;
    le = l - 1;
    ri = st.size();
    
            if(st[i] > 'z')
            {
                st[i] = 'a';
            }

}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    cin>>st;
    while(q--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        solve(s,l,r,k);
    }
    cout<<st;
    return 0;
}