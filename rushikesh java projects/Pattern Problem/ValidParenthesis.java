import java.util.ArrayDeque;
import java.util.Deque;
//works only for ([]) not for {()[]}
class ValidParenthesis{
    public static boolean isValid(String s)
    {
        Deque<Character> stack = new ArrayDeque<>();
        for(char c : s.toCharArray())
        {
            if(c == '(' || c == '{' || c == '[')
            {
                stack.push(c);
            }
            
            else if(c == ')' && stack.peek() == '(')
            {
                stack.pop();
            }
            else if(c == '}' && stack.peek() == '{')
            {
                stack.pop();
            }
            else if(c == ']' && stack.peek() == '[')
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
        return stack.isEmpty();
    
    }

    public static void main(String[] args) {
        String s = "{()}";
        boolean result = isValid(s);
        System.out.println(result);
    }
}