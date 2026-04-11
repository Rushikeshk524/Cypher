public class Recursion {
    
    public void Reverse(String str)
    {   
        int top = -1; 
        char[] arr = new char[10];
        for(int i = 0; i < str.length(); i++)
        {
            if(top == -1) top = 0;
            arr[top] = str.charAt(i);
            top++;
        }
        for(int i = 0; i <= str.length(); i++)
        {
           System.out.println(arr[top] + " " + top);
           top--;
        }
        System.out.println(str.length());
    }
    public static void main(String[] args)
    {
        Recursion instance = new Recursion();
        instance.Reverse("abcd");
    }
}
