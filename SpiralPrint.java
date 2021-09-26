import java.util.*;

public class SpiralPrint 
{
	public static void spiralPrint(int[][] a)
	{
		int t,l,d,r,dir=0;
		t=0;
		r=a[0].length-1;
		l=0;
		d=a.length-1;
		System.out.println(d);
		int i;
        
		while(t<=d && l<=r)
		{
			if (dir==0)
			{
				for(i=l; i<=r;i++)
					System.out.print(a[t][i]+" ");
				t+=1;
			}
			else if(dir==1)
			{
					for(i=t; i<=d;i++)
						System.out.print(a[i][r]+" ");
					r--;
			}
			else if(dir==2)
			{
					for(i=r; i>=l;i--)
						System.out.print(a[d][i]+" ");
					d--;
			}
			else if(dir==3)
			{
					for(i=d; i>=t;i--)
						System.out.print(a[i][l]+" ");
					l++;
			}

			dir=(dir+1)%4;


		}


	}

	public static void main(String[] args) 
	{
		 int a[][] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
		 SpiralPrint.spiralPrint(a);
	}
}
