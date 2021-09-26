#include<iostream>
#include<string>
using namespace std;

int totalPaths=0;
void mazePaths(int i,int j,int n ,int m ,string osf)
{
	if( ( i == n-1 ) && ( j == m - 1 ) )
	{   
		totalPaths+=1;
		cout<<osf<<"\n";
		return;
	}
	
	if( i>=n || j>=m )
	   return;
	   
	mazePaths( i , j+1 , n , m , osf+"R" );
	mazePaths( i+1 , j , n , m , osf+"D" );
//	mazePaths(i+1,j+1,n,m,osf+"X");
}
int main()
{
	
	
	mazePaths(0,0,4,4,"");
	cout<<"Total Paths:"<<totalPaths;
	return 0;
}
