import java.util.*;
public class CoinChange 
{

	public static long coinChange(int a[],int n,int m)
	{

      long []table= new long[n+1];

	  Arrays.fill(table,0);

	  table[0]=1;

	  for(int i=0;i<m;i++)
		{

		  for(int j=a[i];j<=n;j++)
			{
				table[j]+=table[j-a[i]];
		  
		  }
		}
		return table[n];

	}
	public static void main(String[] args) 
	{
		 int arr[] = {1, 2, 3};
        int m = arr.length;
        int n = 4;
		System.out.println(CoinChange.coinChange(arr,n,m));
	}
}
