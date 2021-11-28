#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector< vector<int> >v{ {5, 2, 3, 4}, {1, 6} };
	int amount=0;
	vector<int>v1;
	for(int i=0;i<v.size();i++)
	{
		int n=v[i].size();
		for(int j=0;j<n/2;j++)
		amount+=v[i][j];
		if(n&1)
		v1.push_back(v[i][n/2]);
	}
	sort(v1.begin(),v1.end());
	for(int i=0;i<v1.size();i++)
	{
		if(i%2==0)
		amount+=v1[i];
	}
	cout<<amount<<"\n";
}
