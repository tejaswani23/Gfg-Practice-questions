#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count0=0,count1=0,res=0;
	map<int,int>m;
	for(int i=0;s[i];i++)
	{
		if(s[i]=='0')
		count0++;
		else if(s[i]=='1')
		count1++;
		if(m.find(count1-count0)!=m.end())
		{
			res=max(res,i-m[count1-count0]+1);
		}
		else
		m[count1-count0]=i;
	}
	cout<<res<<"\n";
}
