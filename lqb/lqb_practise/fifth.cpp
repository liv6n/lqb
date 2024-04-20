/*#include<bits/stdc++.h>
#define int long long
using namespace std;
int n; 
int ot;
int arr[100005];
int check(int a)
{
    int cnt = 1;
    for(int i = 10;i <= 1e9;i*=10)
    {
        if(a / i != 0)
        cnt++;
    }
    return cnt;
}
signed main()    
{
   // cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i < n;i++)
    {
        
    }

    cout<<check(123456); 
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int k[205];

int main()
{
    queue<int>q1;
    q1.push(1);
    q1.push(3);
    q1.push(5);
    q1.push(7);
    q1.push(9);
    //cout<<q1.front()<<endl;
    //q1.pop();
    //cout<<q1.front()<<endl;
    while(q1.empty() != true)
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }
    return 0;
}