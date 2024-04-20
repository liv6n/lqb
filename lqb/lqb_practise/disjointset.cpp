//并查集  不相交的集合
#include<bits/stdc++.h>
#define N 1010
using namespace std;
int set[N];

int find1(int x)//查找
{
    return set[x];
}
void merge1(int a,int b)//合并，当N值太大时间复杂度较高
{//b并入a(a为较小值)
    f = min(a,b);
    s = max(a,b);
    for(int i = 1;i <= N;i++)
    {
        if(set[i] == s )
            set[i] = f;
    }
}
int find2(int x)//使用树来储存元素,找父节点
{//最坏情况O(n)
    r = x;
    while(set[r] != a)
    r = set[r];
}
void merge2(int a,int b)
{
    set[a] = b;
}
//路径压缩降低时间复杂度（递归）
int find3(int x)
{
    if(set[x] != x)
    set[x] = find3(set[x]); 
    return set[x];
    //将查找过的每一个节点与根节点相连，让树变得更低（扁平）
}

//最小生成树
 
int main()
{

    return 0;
}
