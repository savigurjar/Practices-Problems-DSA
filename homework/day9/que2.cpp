#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<=6;i++)
	{  
		for(int j=0;j<=i;j++)
		{    char ch = 'A'+j;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
