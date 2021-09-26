#include<iostream>
using namespace std;
void insert(long a[],long N)
{
		for(int i = 0; i<N; i++)
		{
			cin>>a[i];
		} 
}
int main()
{
	int T;
	long N,Q ;
	long a[N];
	 
	cin>>T;

	while(T>0 )
	{
      
	 cin>>N>>Q ; 
	 cout<<"\n";

	
        insert(a,N);
        
		while(Q--)
		{
			unsigned long long L,R;

			cin>>L>>R;
			a[L-1]=R;

		}
		
	
		T--;
	};


   cout<<(sizeof(a)+1);

	
	return 0;
}
