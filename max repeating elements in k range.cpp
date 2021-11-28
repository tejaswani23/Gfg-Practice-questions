#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	a[a[i]%k]+=k;
	int m=INT_MIN,p=0;
	for(int i=0;i<n;i++)
	{cout<<a[i]<<"\n";
		if(a[i]>m)
		{
			m=a[i];
			p=i;
		}
	}
	cout<<p<<"\n";
}
