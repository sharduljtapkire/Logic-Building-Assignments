import java.util.*;

class StringX
{
    public boolean CheckBalanced(String str)
    {
        Stack<Character> stack = new Stack<>();

        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch == '(')
            {
                stack.push(ch);
            }
            else if(ch == ')')
            {
                if(stack.isEmpty())
                {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.isEmpty();
    }
}

class Question5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter expression : ");
        String str = sobj.nextLine();

        StringX obj = new BalancedExpression();
        boolean bRet = obj.CheckBalanced(str);

        System.out.println("Result : " + bRet);
    }
}
