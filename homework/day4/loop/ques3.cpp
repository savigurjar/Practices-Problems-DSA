#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any number 1 to n to print numbers which is divisible by 4";
	cin>>n;
	
	for(int i=4;i<n;i++)
	{
		if(i%4 == 0)
		{
			cout<<i<<" ";
		}
	}
	
	return 0;
}
