#include<bits/stdc++.h>
using namespace std;
#define N 110
typedef pair<int,int>PII;
int mark[N][N],map[N][N];
int n, m ,ans;
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
void bfs()
{   
    queue<PII>q;
    q.push({0,0});
    mark[0][0] = 0;
    memset(mark,-1,sizeof(mark));
    for(int i = 0;i < 4;i++)
    {
        PII top = q.front();
        int nex = top.first + dx[i];
        int ney = top.first + dy[i];
        if(nex <= 0&&nex <= n&&n)
    }
}
int main()
{
    cin>>n>>m;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin>>map[i][j];
        }
    }
    bfs();
    return 0;
}