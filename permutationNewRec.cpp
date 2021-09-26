#include<iostream>
#include<string>
using namespace std;
void swap(string x,string y)
{
	string z=x;
	x=y;
	y=z;
	
}
void permutation(string str,int j)
{
	if(j==str.size()-1)
	{
		cout<<str<<"\n";
		return;
		
	}
	
	for(int i=j;i<str.size();i++)
	{
		swap(str[i],str[j]);
		permutation(str,j+1);
		swap(str[i],str[j]);
	}
}
int main()
{
	
	
	
	permutation("abcd",0);
	
	return 0;
}
