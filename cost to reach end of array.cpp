#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int dp[n];
	dp[0]=a[0];
	dp[1]=a[0]+a[1]+a[2];
	for(int i=2;i<n-1;i++)
	{
		dp[i]=min(dp[i-1]+a[i]+a[i+1],dp[i-2]+a[i]);
	}
	dp[n-1]=min(dp[n-3]+a[n-1],dp[n-2]);
	cout<<dp[n-1]<<"\n";
}
