#include<iostream>
using namespace std;
int F[20];
int is_computed[20];

int f(int i)
{
	
	if(i<2)
	  return i;
	  
	if (is_computed[i])
	   return F[i];  
	  
	F[i]=f(i-1)+f(i-2);
	is_computed[i]=true;
	return F[i];
	}


int main()
{
	
	cout<<f(5);
	
	
	return 0;
}
