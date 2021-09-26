#include<iostream>
#include<string>
using namespace std;
int total=0;
void dicePath(int n , int i, string osf)
{	
	++total;

	if(i>=n)return;
	
	if(i==n-1)
	{
		cout<<osf<<"\n";
		return ;
	}
	
	for(int j=1;j<=6;j++)
	{
		
		dicePath(n,i+j,osf+to_string(j)+"->");
		
	}
	
}

int main()
{
	dicePath(4,0,"");
	
	cout<<"\n"<<total;
	
	return 0;
}
