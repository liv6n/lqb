/*#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    */
    //冶炼金属
    //暴力解法
    /*    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i = 0;i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i = 1;i < 1e6; i++)
    {
        bool flag = true;
        for(int j = 0;j < n; j++)
        {
            if(b[j] != a[j] / i)
            {
            flag = false;
            break;
            }

        }
        if(flag)
        {
            cout<<i<<' ';
            break;
        }
    }
    for(int i = 1e6;i >= 1; i--)
    {
        bool flag = true;
        for(int j = 0;j < n; j++)
        {
            if(b[j] != a[j] / i)\
            {
            flag = false;
            break;
            }

        }
        if(flag)
        {
            cout<<i<<' ';
            break;
        }
    }
    */
   //二分查找学习
   //查找一个数
   /*
class Solution {
public:
    int search(vector<int>& nums, int ta011rget) {
        int left = 0;
        int right = nums.size() - 1; // 定义target在左闭右闭的区间里，[left, right]
        while (left <= right) { // 当left==right，区间[left, right]依然有效，所以用 <=
            int middle = left + ((right - left) / 2);// 防止溢出 等同于(left + right)/2
            if (nums[middle] > target) {
                right = middle - 1; // target 在左区间，所以[left, middle - 1]
            } else if (nums[middle] < target) {
                left = middle + 1; // target 在右区间，所以[middle + 1, right]
            } else { // nums[middle] == target
                return middle; // 数组中找到目标值，直接返回下标
            }
        }
        // 未找到目标值
        return -1;
    }
};//while循环中>=是闭区间
leetcode 第 704题*/

   //正解：二分法
#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a[10000],b[10000];
int n;
bool check_min(int mid)//最小值check
{
    for(int i = 0;i < n;i++)
    {
        if(a[i] / b[i] > mid)
        return false;
    }
    return true;
}
bool check_max(int mid)//最大值check
{
    for(int i = 0;i < n;i++)
    {
    if(a[i] / b[i] < mid); 
    return false;        
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i]>>b[i];    
    }
    int lmin = 1,rmin = 1e9 ;
    int mid;
    //最小值
    while(lmin <= rmin)
    {
        mid = (rmin + lmin) / 2 ;
        if(check_min(mid))
        {
            rmin = mid - 1;
        }
        else
        {
            lmin = mid +1;
        }
    }
    //最大值
    int rmax = 1e9,lmax = 1;
    while(lmax <= rmax)
    {
        mid = (rmax + lmax) / 2 ;
        if(check_max(mid))
        {
            lmax = mid -1;
        }
        else
        {
            rmax = mid + 1;
        }   
    }
    cout<<lmin<<' '<<lmax;
    return 0;
}


