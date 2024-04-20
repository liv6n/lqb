#include<bits/stdc++.h>
using namespace std; 
typedef pair<int,double>PII;
int main()
{
	queue<PII>q;
	q.push({0,1.2});
	PII top = q.front();
	cout<<top.first<<endl;
	cout<<top.second<<endl;
	return 0;
}

