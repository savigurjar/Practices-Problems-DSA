#include<iostream>
#include<vector>
using namespace std;
int searchElement(int n,vector<int>& arr,int x)
{
	int index = -1;
 	for(int i=0;i<n;i++)
 	{
 		if(arr[i]==x)
 		{
 			index = i;
		 }
	 }
	 cout<<"element found at index "<<index<<endl;
	
}
int main()
{
		int n;
	cout<<"enter size of array ";
	cin>>n;
	
	vector<int>arr(10000);
	cout<<"enter element in array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int x;
	cout<<"enter element you want to find ";
	cin>>x; 
	
	searchElement(n,arr,x);

	return 0;
	
}

