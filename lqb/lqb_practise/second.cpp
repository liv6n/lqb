#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;
signed main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //子串简写
    //暴力解法
    //类似 双指针
    //暴力解法过百分三十左右样例，其余是超时
    char c1,c2;
    string st;
    int k;
    int cot;
    cin>>k>>st>>c1>>c2;
    for(int i = 0;i < st.size();i++)
    {
        if(st[i] != c1)
        continue;//跳出本次循环
        for(int j = i + 1;j < st.size();j++)
        {
            int len = j - i + 1;

            if(len >= k && st[j] == c2)
            {
                cot++;
            }
        }
    }
    cout<<cot<<endl;
}
