#include<bits/stdc++.h>
using namespace std;
int kadaneAlgo(int a[],int n)
{
	int max_so_far = 0, max_ending_here = 0;
    int i;
    for (i = 0; i < n; i++) {
        max_ending_here = max_ending_here + a[i];
         
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
          if (max_ending_here < 0)
              max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int m=kadaneAlgo(a,n);  //max subarray sum by kadane algorithm
	int sum=0;
	for(int index=0;index<n;index++)
	{
		sum+= a[index];
		a[index]=-a[index]; //inverting sign of array elemnts
	}
	int n1=kadaneAlgo(a,n);
	sum+=n1; //maximum sum after subtracting maximum subbary of negative elemnts;
	cout<<m<<' '<<sum<<' '<<max(sum,m)<<"\n";
}
