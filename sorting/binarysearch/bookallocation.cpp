#include<iostream>
#include<vector>
using namespace std;
//book allocation [allocate minimum number of pages(max(min))]
int bookAllocation(int n,vector<int>&arr,int s)
{
	int start = 0,end = 0,mid,s;
	
}
int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	
	vector<int>arr(100000);
	cout<<"enter elements in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	 
	int s;
	cout<<"enter number of students";
	cin>>s;
	
	bookAllocation(n,arr,s);
	
	return 0;
}
