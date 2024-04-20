//一维前缀和
/*#include<bits/stdc++.h>
using namespace std;
int n,m,a[1010],s[1010];    
int main()
{

    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i <= n;i++)
    {   //O(n)
        //前缀和初始化
        s[i] = s[i - 1] + a[i];// 数列求和Sn = Sn-1  + An
    }
    while (m--)
    {
        int r,l;
        cin>>l>>r;
        cout<<s[r] - s[l-1]<<endl;
    }
    
    return 0;
}*/

//二维前缀和

#include<bits/stdc++.h>
#define N 1010
using namespace std;
int s[N][N];
int n,m,q;
int main()
{
    cin>>n>>m>>q;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            s[i][j] += s[i-1][j] + s[i][j-1]-s[i-1][j-1];
        }
    }  
    while(q--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<< s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1]<<endl;
    }
    return 0;
}


/*
//一维差分
#include<bits/stdc++.h>
#define N 1010
using namespace std;
int s[N],b[N];//全局变量默认为0
int main()
{

    int n,m;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        cin>>s[i];
        b[i] = s[i] - s[i-1];
    }
    while(m--)
    {
        int l,r,c;
        cin>>l>>r>>c;
        b[l] += c;
        b[r + 1] -= c;
    }
    for(int i = 1;i <= n;i++)
    {
        b[i] += b[i-1];
        cout<<b[i]<<" ";
    }
    return 0;
}

*

/*#include<iostream>
#include<cstdio>
using namespace std;
const int N = 1e3 + 10;
int a[N][N], b[N][N];
void insert(int x1, int y1, int x2, int y2, int c)
{
    b[x1][y1] += c;
    b[x2 + 1][y1] -= c;
    b[x1][y2 + 1] -= c;
    b[x2 + 1][y2 + 1] += c;
}
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            insert(i, j, i, j, a[i][j]);      //构建差分数组
        }
    }
    while (q--)
    {
        int x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        insert(x1, y1, x2, y2, c);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];  //二维前缀和
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

