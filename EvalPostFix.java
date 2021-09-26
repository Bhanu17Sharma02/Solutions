import java.util.*;
public class EvalPostFix 
{   

	public static int evalPostFix(String exp)
	{	
			Deque<Integer> stack = new ArrayDeque<>();
		int result=0,y,z;	
		for(int i=0; i< exp.length(); i++)
		{
			char x=exp.charAt(i);

			if (Character.isDigit(x))
			{
				stack.push(Integer.parseInt(String.valueOf(x)));
				continue;
			}	

			switch(x)
			{
					case '+':
						     y=stack.pop();
					         z=stack.pop();
							 result=z+y;
							 break;
					
					case '-':
						     y=stack.pop();
					         z=stack.pop();
							 result=z-y;
							 break;
					
					case '*':
						     y=stack.pop();
					         z=stack.pop();
							 result=z*y;
							 break;

					case '/':
						     y=stack.pop();
					         z=stack.pop();
							 result=z+y;
							 break;
					
					case '%':
						     y=stack.pop();
					         z=stack.pop();
							 result=z%y;
							 break;
			}

			stack.push(result);

		}
		return stack.pop();

	}






	public static void main(String[] args) 
	{
		System.out.println(EvalPostFix.evalPostFix("231*+9-"));
	}
}
