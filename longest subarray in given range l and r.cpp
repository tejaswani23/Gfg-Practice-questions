#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,r,len=0,sum=0,j=0;
	cin>>n>>l>>r;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(sum+a[i]<l)
		{
			sum+=a[i];
			j++;
		}
		else
		break;
	}
	int i=0;
	while(i<n && j<n)
	{
		if(sum<l)
		{
			sum+=a[j];
			j++;
		}else if(sum>r)
		{
			sum-= a[i];
			i++;
		}
		else
		{
			len=max(len,j-i);
			sum+=a[j];
			j++;
		}
	}
	cout<<len<<"\n";
}
