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
            else
            {
                if(stack.isEmpty()){
                    return false;
                }
                if(c == ')' && stack.peek() != '(')
                {
                    return false;
                }
                if(c == ']' && stack.peek() != '[')
                {
                    return false;
                }
                if(c == '}' && stack.peek() != '{')
                {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }

    public static void main(String[] args) {
        String s = "({}())";
        boolean result = isValid(s);
        System.out.println(result);
    }
}