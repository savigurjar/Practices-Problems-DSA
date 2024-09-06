#include<iostream>
#include<vector>
using namespace std;
void reverseArray(int n, vector<int>& arr)
{
	int start = 0;
	int end = n-1;
	
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	

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
	reverseArray(n,arr);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
