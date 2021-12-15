#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	int a[n],dp[n];
	for(int i=0;i<n;i++)
    cin>>a[i];
	for(int i=n-1;i>=0;i--)
	{
		dp[i]=a[i];
		int j=i+a[i];
		if(j<n)
		dp[i]=dp[i]+dp[j];
		ans=max(ans,dp[i]);
	}
	cout<<ans<<"\n";
}
