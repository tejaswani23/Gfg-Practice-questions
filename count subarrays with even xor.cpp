#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int even=0,odd=0,x=0,ans=0;
	for(int i=0;i<n;i++)
	{
		x^=a[i];
		if(x&1)
		{
			ans+=odd;
			odd++;
		}
		else
		{
			ans+=even+1;
			even++;
		}
	}
	cout<<ans<<"\n";
}
