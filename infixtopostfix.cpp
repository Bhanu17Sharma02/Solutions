#include<iostream>
#include<vector>
using namespace std;

int main()
{   vector<char> v1;
    
    
     char a[30];
     cin>>a;
     for(int i=0;i<30;i++)
     {
     	if(isalpha(a[i]))
     	  cout<<a[i];
     	else if(a[i]==')')
     	{
		 
     	do{
		    v1.pop_back(a[i]);
			
		   }while(a[i]=='(');
	}
		else
		{
			
		}
		     
	 }
	
	return 0;
}
