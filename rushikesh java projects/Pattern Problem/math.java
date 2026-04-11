/*
Content
1. Fibbonacchi
2. Greatest Common Divisor
3. Euclidiean Algorithm
4. Naive LCM
5. Expected LCM

*/

public class math {

    public void Fibb(int num)
    {
        int first = 0;
        int second = 1;
        int third;
        System.out.print(first+" ");
        System.out.print(second+" ");
        for(int i = 0; i < num - 2; i++)
        {
           
            third = first + second;
            System.out.print(third+" ");
            first = second;
            second = third;
        }
    }
    //Greatest Common Divisor O(min(num1, num2))
    //A num that can divide both num1 and num2
    public int GCD(int num1, int num2)
    {
        if(num1 == 0 || num2 == 0)
            return Math.max(num1, num2);

        int result = Math.min(num1, num2);
        while(result > 0)
        {
            if(num1 % result == 0 && num2 % result == 0)
            {
                break;
            }
            result--;
        }
        return result;
    }
    //Euclidean Algorithm to find GCD O(min(num1, num2))
    public int Euclidean(int num1, int num2)
    {
        //any number can divide 0
        if(num1 == 0) return num2;
        if(num2 == 0) return num1;

        //best case
        if(num1 == num2) return num1;

        if(num1 > num2) return Euclidean(num1 - num2, num1);
        else return Euclidean(num1, num2 - num1);
    }
    //A num that gets divided by both num1 and num2
    //LCM O(min(num1, num2))
    public int NaiveLCM(int num1, int num2)
    {
        int max = Math.max(num1, num2);
        int min = Math.min(num1, num2);
        for(int i = 1; i < max; i++)
        {
            if(max*i % min == 0) return max*i;

        }
        return num1*num2;

    }
    //GCD(num1, num2) * LCM(num1m num2) = num1 * num2
    public int ExpectedLCM(int num1, int num2)
    {
        return num1*num2 / GCD(num1, num2);
    }

    public int Factorial(int num)
    {
        if(num == 1 || num == 0) return 1;

        return num*Factorial(num - 1);
    } 

    public static void main(String args[])
    {
        math instance = new math();
        //instance.Fibb(40);
        //int result = instance.GCD(20, 28);
        //int result = instance.Euclidean(20, 28);
        //int result = instance.NaiveLCM(2, 12);
        //int result = instance.ExpectedLCM(5, 11);
        int result = instance.Factorial(5);
        System.out.println(result);
    }
}

