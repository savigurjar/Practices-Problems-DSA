#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter 5 ";
	cin>>n;
	for(int i=1;i<=5;i++)
	{   int count = 5;
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<count;
			count--;
		}
		cout<<endl;
	}
	return 0;
}
