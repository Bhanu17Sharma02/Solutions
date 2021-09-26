#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

bitset<100>col,ld,rd;

int ans =0;

void nQueen(int cr ,int n)
{
	
	if(cr==n)
	{
		ans++;
		return;
		 
	}
	
	for(int c=0 ; c<n ; c++)
	{
		if(!col[c] and !ld[cr-c+n-1] and !rd[cr+c] )
		{
			col[c]=ld[cr-c+n-1]=rd[cr+c]=1;
			nQueen(cr+1,n);
			col[c]=ld[cr-c+n-1]=rd[cr+c]=0;
			
		}
		
	}
}

int main()
{
	int n;
	 cin>>n;
	 nQueen(0,n);
	 
	 cout<<ans;
}
