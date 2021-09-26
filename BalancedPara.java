import java.util.*;

public class  BalancedPara
{
    public static boolean isBalanced(String expr)
	{
	
	Deque<Character> stack = new ArrayDeque<>();

	for(int i=0; i<expr.length(); i++)
		{
			
			char x=expr.charAt(i);

			if(x=='[' || x=='{' || x=='(')
			{
				stack.push(x);
				continue;

			}

			if(stack.isEmpty())
				return false;
			
			char y;
			switch(x)
			{
				case ')':
					     y=stack.pop();
				         if( y!='(')
							 return false;
						 break;
				
				case '}':
						 y=stack.pop();
				         if (y!='{')
							return false;
						 break;


				case ']':
							y=stack.pop();
				            if(y!='[')
								return false;
							break;
				         
		    }

		}

	return stack.isEmpty();
	
	}

	public static void main(String[] args) 
	{
		String expr ="([{}])";

		if(BalancedPara.isBalanced(expr))
			System.out.println("Balanced");
		else
			System.out.println("UnBalanced");
	}
}
