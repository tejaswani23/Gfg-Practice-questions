#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int k,int n)
{
	int m=a[k],curr=a[k];
	for(int i=k+1;i<n;i++)
	{
		curr=max(a[i],curr+a[i]);
		m=max(m,curr);
	}
	return m;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int r=kadane(a,i,n);
		cout<<r<<" ";
	}
}
