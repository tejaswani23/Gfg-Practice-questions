#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],ng[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	stack<int>s;
	for(int i=n-1;i>=0;i--)
	{
		while(!s.empty() && a[s.top()]<=a[i])
		{
			s.pop();
		}
		
		ng[i]=s.empty()? n: s.top();
		s.push(i);
	}
	
	for(int i=0;i<n;i++)
	cout<<ng[i]<<' ';
}
