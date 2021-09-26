#include<iostream>
#include<vector>
using namespace std;
int count=0;

void dispaly(vector<vector<bool>> &grid,int n)
{
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<n;j++)
		{
			
			if(grid[i][j])
			cout<<" Q "<<" ";
			else
			cout<<" . "<<" ";
		}
		
		cout<<"\n";
	}
}

bool isItSafe(vector<vector<bool>> &grid,int row , int col, int n)
{
	//column check...
	for(int i=row-1; i>=0; i--)
	{
		
		if(grid[i][col])
		  return false;
	}
	
	//left diagonal check...
	for(int i=row-1, j = col-1;i>=0&&j>=0;i--,j--)
	{
		
		if(grid[i][j])
		 return false;
		 
		
	}
	
	//right diagonal check...
	for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++)
	{
		if(grid[i][j])
		 return false;
	}
	
	 return true;
	
}


void countNQueen(vector<vector<bool>> &grid,int cur_row , int n)
{   


	if(cur_row==n)
	{
		count++;
		dispaly(grid,n);
		cout<<"\n\n";
		return;
		
	}	
	for(int j=0; j<n; j++)
	{
		if(isItSafe(grid,cur_row,j,n))
		{
			
			grid[cur_row][j]=true;
			countNQueen(grid,cur_row+1,n);
			grid[cur_row][j]=false;
		}
		
	}
}

int main()
{
	int n;
	cin>>n;
	vector<vector<bool>> grid(n,vector<bool>(n,false));
	countNQueen(grid,0,n);
	cout<<"\n";
	cout<<count;
	
	return 0;
	
	
}
