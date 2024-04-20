/*#include<bits/stdc++.h>
#define endl '\n'
#define int long long 
using namespace std;
/*
int st[20];//用于记录状态0表示未考虑，1表示选中，2表示未选
int n ;
void dfs1(int x){//x表示
+-a当前枚举到的位置
    if(x > n){
        for(int i = 1;i <= n;i++){
            if(st[i] == 1){
                cout<<i<<' ';
            }
        }
        cout<<endl;
        return ;
    }
     //先不选
    st[x] = 2;
    dfs(x + 1);
    st[x] = 0;//恢复现场
    //先选
    st[x] = 1;
    dfs(x + 1);
    st[x] = 0;//回溯
}*/
//dfs，深搜
//例题 ：从1到n个整数中随机选取多个，输出所有可能的结果

/*a------------------------------------------------------------------------------------
.2
int ans[10];
//bool mark[10];int 类型方便一些
int mark[10];
int n;
void dfs2(int u)
{
    if(u == n){
        for(int i = 0;i < n;i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    for(int i = 1;i <= n;i++){
        if(mark[i] == 0){
            mark[i] = 1;
            ans[u] = i;
            dfs2(u+1);
            mark[i] = 0;
            ans[u] = 0;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    //dfs1(1);
    //puts("");
    dfs2(0);
    return 0;
}*/

/*
int n , k;
int cot = 0;
int ar[25];
bool isPrime(int a)
{
    int len = sqrt(a);//减少时间复杂度
    for(int i = 2;i <= len ;i++)
    {
        if(a % len == 0)
        return false;
    }
    return true;
}
void dfs(int m,int sum,int sf)
{
    if(k == m)
    {
        if(isPrime(sum))
        cot++;
        return ;
    }
    for(int i = sf;i < n;i++)
    {
        dfs(m + 1, ar[i] + sum,i + 1);
    }
    return ;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i = 0;i < n;i++)
    {
        cin>>ar[i];
    }
    dfs(0,0,0);
    cout<<cot;
    return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;
int n,k,cnt;
int arr[22],mark[22];
bool check(int sum)
{
    int len = sqrt(sum);
    for(int i = 2;i <= len;i++)
    {
        if(sum % i == 0)
        return false;
    }
    return true;
}

void dfs(int sum,int step,int startn)//第一个参数求和，第二个步骤数，第三个
{
    if(step == k)//结束条件
    {
        if(check(sum))
        {
        cnt++;
        }
        return;
    }
    for(int i = 1;i <= n;i++)//枚举每一种情况
    {
        if(mark[i] == 0)
        {
            temp[step] = arr[i];
            mark[i] = 1;
            dfs(sum + arr[i],step+1);
            mark[i] = 1;
        }
    }
    return ;

}
int main()
{
    cin>>n>>k;
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    dfs(0,0,0);
    cout<<cnt;
    return 0;
}
*//*#include<cstdio>
using namespace std;
int m,n,p,q,min=99999999;//p,q是终点坐标 
int a[100][100];//地图 ,其中1表示空地，2表示障碍物 
int v[100][100]; //0表示未访问，1表示已访问 
//int dx[4]={0,1,0,-1};
//int dy[4]={1,0,-1,0}; 
int next1[4][4] = {{0,1},{1,0},{0,-1},{-1,0}};
void dfs(int x,int y,int step){
	if(x==p && y==q)
	{
		if(step<min)	
		min=step;
		return;//回溯 
	}
	for(int k=0;k<=3;k++)
	{
		int tx,ty;
		tx=x+next1[k][0];
		ty=y+next1[k][0];
		if(a[tx][ty]==1 && v[tx][ty]==0)//如果(是空地 并且 没有被访问) 
			{
			v[tx][ty]=1;//设置为已访问 
			dfs(tx,ty,step+1);
			v[tx][ty]=0;
			}
	}
	return;
}
 
int main()
{
	int startx,starty; 
	printf("请输入地图的行与列:\n"); 
	scanf("%d%d",&m,&n);
	printf("请输入地图障碍物布局:\n");//1表示空地，2表示障碍物
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		scanf("%d",&a[i][j]);//1表示空地，2表示障碍物
	printf("请输入起点坐标和终点坐标:\n");	
	scanf("%d%d%d%d",&startx,&starty,&p,&q);
	v[startx][starty]=1;
	dfs(startx,starty,0);
	printf("需要%d步",min);
	
	return 0;
	
}*/

#include <bits/stdc++.h>
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
    if (x == p && y == q) //临界条件
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
        //tx = x + dx[i];
        //ty = y + dy[i];
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
int main()
{
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