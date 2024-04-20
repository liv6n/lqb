//sort() 练习
#include<bits/stdc++.h>
using namespace std;
//规定sort排序方式
/*
bool cmp1(int x,int y)
{
    return x>y;//此种与greater<int>()效果相同
    // return x % 3 > y % 3; //按照取余3的余数降序排
}*/
struct S{
    string name;
    int score[4];
};
bool cmp(S x,S y)
{
    if(x.score[0] != y.score[0])
    {
        return x.score[0] > y.score[0];
    }//不用写else，如果不相等就进入if然后return，如果相等进入下一个if
    if(x.score[1] != y.score[1])
    {
        return x.score[1] > y.score[1];
    }
    if(x.score[2] != y.score[2])
    {
        return x.score[2] > y.score[2];
    }
    if(x.score[3] != y.score[3])
    {
        return x.score[3] > y.score[3];
    }
}

int main()
{   
    /*
    int arr[5];
    for(int i = 0;i < 5 ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+5,greater<int>());//从大到小排序，不加greater<int>()默认从小到大排序
    for(int i = 0;i < 5 ;i++)
    {
        cout<<arr[i]<<endl;
    }
    */
   S stu[3];
   for(int i = 0;i < 3;i++)
   {
    cin>>stu[i].name;
    for(int j = 0;j < 4;j++)
    {
        cin>>stu[i].score[j];
    }
   }
   sort(stu,stu + 3,cmp);
   for(int i = 0 ;i < 3;i++)
   {
    cout<<stu[i].name<<endl;
   }
    return 0;
    
}

