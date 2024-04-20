#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a[20],book[20];
int n;
void dfs(int step)
{
    if(step == n + 1)
    {
        for(int i = 1; i <= n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        return ;
    }
    for(int i = 1; i <= n;i++)
    {
        if(book[i] == 0)
        {
        a[step] = i;
        book[i] = 1;
        dfs(step + 1);
        book[i] = 0;//回溯
        }

    }
    return ;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    dfs(1);
    return 0;
}


// 给出一个迷宫（n行m列），标记1是障碍，标记0可以通过
/*
    0100
    0001
    1100
    0011
    1010
    从入口到出口
求最短路径
*/
/*
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int next1[4][2]={
	    {0,1}, //向右走一步
		{1,0},//向下走一步
		{0,-1},//向左走一步
		{-1,0}};//向上走一步
//int dx[4] = {0,1,0,-1};
//int dy[4] = {1,0,-1,0};
int a[100][100];   // 迷宫数组
int vis[100][100]; // 标记数组1为已经走过，0为未走过
int n, m, x, y, p, q;
int min1 = 99; // 最短路径，赋初值
void dfs(int x, int y, int step)
{
    if (x == p && y == q) 
    {
        if (step < min1)
        {
            min1 = step;
        }
        return;
    }
    for (int i = 0; i < 4; i++) // 四个方向试探能否通过
    {
        int tx, ty;
        tx = x + next1[i][0];
        ty = y + next1[i][1];
        if (tx <= 0 || tx > n || ty <= 0 || ty > m)
        {
            continue; // 超出边界，重新试探
        }
        if (a[tx][ty] == 0 && vis[tx][ty] == 0)
        {
            vis[tx][ty] = 1;
            dfs(tx, ty, step + 1);
            vis[tx][ty] = 0; // 回溯
        }
    }
    return;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int sx, sy;                // 开始位置
    cin >> m >> n;             // 读入迷宫
    cin >> sx >> sy >> p >> q; // 读入入口和出口的位置
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    vis[sx][sy] = 1 ;
    dfs(sx, sy, 0);
    if (min1 == 99)
    {
        cout << "NO";
    }
    else
    {
        cout << min1;
    }

    return 0;
}

*/

/*#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;
char str[15][15];
int m , n;

signed main()
{
   cin>>m>>n;
   for(int i =1;i <= m;i++)
   {
        for(int j = 1;j <= n;j++)
        {
            cin>>str[i][j];
        }
   }


    return 0;
}
*/
