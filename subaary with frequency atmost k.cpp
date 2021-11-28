#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int p=0,res=0;
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		m[a[i]]++;
		while(m[a[i]]>k && p<=i)
		{
			m[a[p]]--;
			p++;
		}
		res+=(i-p+1);
	}
	cout<<res<<"\n";
}
