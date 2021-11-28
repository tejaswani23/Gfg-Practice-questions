#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k; //size of array
	
	int arr[n]; 
	for(int index=0;index<n;index++)
	cin>>arr[index];  //storing values in array
	
	vector< vector<int> > powerSet; //2-d vector for storing subsets 
	
	int power=pow(2,n); //total no. of subsets
	
	//generating susbets using bitmasking
	for(int count=0;count<power;count++)
	{
		vector<int>subset; // declaring vector for subset
		for(int index=0;index<n;index++)
		{  
			if(count & (1<<index))
			{  cout<<"&"<<' '<<index<<"\n";
				subset.push_back(arr[index]);
			}
		}
		sort(subset.begin(),subset.end());
		if(count!=0)
		powerSet.push_back(subset);
	}
	
	sort(powerSet.begin(),powerSet.end());  //sort powerset 
	
    for(int index=0;index<powerSet[k].size();index++)
    cout<<powerSet[k][index]<<' ';
}
