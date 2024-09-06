#include<iostream>
using namespace std;
int main()
{
	for(int i=6;i>=0;i--)
	{   char ch = 'A';
		for(int j=0;j<=i;j++)
		{   
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	
	return 0;
}
