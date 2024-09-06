#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter 5 ";
	cin>>n;
	for(int i=1;i<=5;i++)
	{   char ch = 'A'+4;
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}
	return 0;
}
