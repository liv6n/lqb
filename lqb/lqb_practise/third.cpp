#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;
const int N = 30;
int n;//飞机个数
bool st[N];//判断飞机是否降落
struct plane{
    int t,d,l;
}p[N];//表示时间Ti Di Li

//u已经有u架飞机降落
//time当前的时间，前一架飞机落地的时间
bool dfs(int u,int time)
{
    if(u >= n){
        return true;//判断边界，已下落的飞机数目大于等于飞机总数
    }
    for(int i = 0; i < n;i++)
    {
        if(!st[i])//如果飞机未下落
        {
            st[i] = true;
            if(p[i].t + p[i].d < time)//最晚下落时间小于前一架飞机降落时间
            {
                st[i] = false;//回溯
                return false;//直接返回false输出NO
            }
            int t = max(time,p[i].t) + p[i].l;//最大值函数
            if(dfs(u + 1,t))
            {
                return true;
            }
            st[i] = false;
        }
    }
    return false;
}
void solve()
{
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>p[i].t>>p[i].d>>p[i].l;
    }
    if(dfs(0,0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
        for(int i = 0 ;i < n;i++)
    {//初始化st数组
        st[i] = false;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //当数据大小只有几十时，大概率是暴力枚举，往往是dfs
    //dfs 枚举
    //飞机降落问题
    int tl = 1;
    cin>>tl;
    while(tl--)
    //对于dfs类型应抽出一个函数，避免在主函数中写程序
    solve();
    return 0;
}