#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter 5 ";
	cin>>n;
	for(int i=0;i<=5;i++)
	{  char ch = 'A'+i;
		for(int j=0;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
		cout<<ch;	
		}
		cout<<endl;
	}
	return 0;
}
