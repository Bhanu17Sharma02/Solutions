#include<iostream>
#include<vector>
#define vvb vector<vector<bool>>
using namespace std;

void display(vvb &grid,int n)
{
	for(int i=0; i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			if(grid[i][j])
			cout<<"K ";
			else
			cout<<". ";
			
		}
		cout<<"\n";
		
	}
	
	cout<<"\n\n";
	
	
	
}

bool isItSafe(vvb & grid, int n,int cr , int cc)
{
	if(cr-2>=0 and cc-1>=0 and grid[cr-2][cc-1])
	  return false;
	  
	if(cr-1>=0 and cc-2>=0 and grid[cr-1][cc-2])
	 return false;
	 
   if(cr-2>=0 and cc+1<n and grid[cr-2][cc+1])	 
      return false;
	  
   if(cr-1>=0 and cc+2<n and grid[cr-1][cc+2])
      return false;
	  
  return true;	  	    
	
	
}

int ans=0;

void nKnight(vvb &grid, int n , int cr, int cc, int count)
{
	if(count==n)
	{
		ans++;
		display(grid,n);
		return;
		
		
	}
	
	for(int i=cr;i<n;i++)
	{
		
		for(int j=(i==cr)?cc:0;j<n;j++)
		{
			
			if(isItSafe(grid,n,i,j))
			{
			grid[i][j]=true;
			nKnight(grid,n,i,j+1,count+1);
			grid[i][j]=false;
	     	}
			
		}
	}
	
}

int main()
{
	int n;
	cin>>n;
	vvb grid(n,vector<bool>(n,false));
	nKnight(grid,n,0,0,0);
	
	cout<<ans;
	
	return 0;
}







