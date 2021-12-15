#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],pg[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		while(!s.empty() && a[s.top()]<=a[i])
		{
			s.pop();
		}
		
		pg[i]=s.empty()? -1: s.top();
		s.push(i);
	}
	
	for(int i=0;i<n;i++)
	cout<<pg[i]<<' ';
}
