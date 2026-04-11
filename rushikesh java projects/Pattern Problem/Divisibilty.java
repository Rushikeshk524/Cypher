public class Divisibilty {

    public boolean div3(int num)
    {
        int sum = 0;
        while(num > 0)
        {
            int rem = sum % 10;
            sum = sum + rem;
            num /= 10; //remove the last digit of num 133.2
        }

        if(sum % 3 == 0) return true;

        return false;
    }

    public boolean div4(int num)
    {
        int rem = num % 100;
         System.out.println(rem);
        if(rem % 4 == 0) return true;
       
        return false;
    }

    public boolean div6(int num)
    {
        int LastDigit = num % 10;

        int sum = 0;
        while(num > 0)
        {
            int rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        if(LastDigit % 2 == 0 && sum % 3 == 0) return true;

        return false;
    }

    public boolean div7(int num)
    {
        if(num == 0 || num == 7) return true;

        while(num >= 10)
        {
            int rem = (num % 10);
            num /= 10;
            num = Math.abs(num - rem * 2);
        }

        return num == 0 || num == 7;
    }

    public boolean div9(int num)
    {
        if(num == 0 || num == 9) return true;

        int sum = 0;
        while(num > 0)
        {
            int rem = num % 10;
            sum = sum + rem;
            num /= 10;
        }
        if(sum % 9 == 0) return true;

        return false;
    }
    public boolean div11(int num)
    {
        int Esum = 0;
        int Osum = 0;
        while(num > 0)
        {
            int rem = num % 10;
            Osum = Osum + rem;
            num /= 10;
            if(num == 0) break;
            rem = num % 10;
            Esum = Esum + rem;
            num /= 10;
        }
        if(Math.abs(Esum - Osum) % 11 == 0) return true;

        return false;
    }

    public boolean Alterdiv13(int num)
    {
        if (num == 0) return true;

        int sum = 0;
        int sign = 1;

        while (num > 0)
        {
            int group = num % 1000; // take last 3 digits
            sum += group * sign;

            sign *= -1; // alternate + and -
            num /= 1000; // remove last 3 digits
        }

        sum = Math.abs(sum);
        return sum % 13 == 0;
    }

    public boolean div13(int num)
    {
        /*
        rem = (rem*10 + digit) % 13
        */
        int rev = 0;
        int rem = 0;
        while(num != 0)
        {
            rem = num % 10;
            rev = rev*10 + rem;
            num /= 10;
        }

        rem = 0;
        while(rev != 0)
        {
            rem = (rem * 10 + rev%10) % 13;
            rev /= 10;
        }
    
        return rem == 0;
        
    }

    public boolean div29(int num)
    {
        int rem = 0;
        while(num / 100 > 0)
        {
            rem = num % 10;
            num /= 10;
            num += rem * 3;
        }

        return num % 29 == 0;
    }
    public static void main(String[] args) 
    {
        Divisibilty instance = new Divisibilty();
        //System.out.println(instance.div3(1332));
        //System.out.println(instance.div4(1224));
        //System.out.println(instance.div6(2112));
        //System.out.println(instance.div7(371));
        //System.out.println(instance.div9(69354));
        //System.out.println(instance.div11(76945));
        //System.out.println(instance.div13(2911285));
        System.out.println(instance.div29(348));
    }
}
