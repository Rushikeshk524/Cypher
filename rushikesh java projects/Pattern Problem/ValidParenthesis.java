import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;

class ValidParenthesis{
    public static boolean isValid(String s)
    {
        Deque<Character> stack = new ArrayDeque<>();
        for(char c : s.toCharArray())
        {
            if(c == '(' || c == '{' || c == '['){
                stack.push(c);
            }    
            else if(c == ')')
            {
                if(stack.isEmpty() || stack.pop() != '(') return false;
            }
            else if(c == '}')
            {
                if(stack.isEmpty() || stack.pop() != '{') return false;
            }
            else if(c == ']')
            {
                if(stack.isEmpty() || stack.pop() != '[') return false;
            }
        }
        return stack.isEmpty();
    
    }

    public static void main(String[] args) {
        String s = "(){{}[]()}{[()]}";
        boolean result = isValid(s);
        System.out.println(result);
    }
}