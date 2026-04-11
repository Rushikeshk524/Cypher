import java.util.Arrays;

public class Sequence {
    
    public void Juggler(int num)
    {
        int a = num;

        System.out.print(a + " ");

        while(a != 1){
            int b = 0;
            if(a%2 == 0)
                b = (int)Math.floor(Math.sqrt(a));
            else 
                b = (int)Math.floor(Math.sqrt(a)*Math.sqrt(a)*Math.sqrt(a));
            System.out.print(b + " ");
            a = b;
        }
    }
    //P(n) = P(n - 2) + P(n - 3) n > 2
    public void Padovan(int num)
    {
        int arr[] = new int[10];
        arr[0] = arr[1] = arr[2] = 1;
        System.out.print(arr[0]+" ");
        System.out.print(arr[1]+" ");
        System.out.print(arr[2]+" ");
        for(int i = 3; i < num; i++)
        {   int p;
            p = arr[i - 2] + arr[i - 3];
            arr[i] = p;
            System.out.print(arr[i] + " ");

        }
    }

    public void Aliquot(int num)
    {
        if(num < 1) return;
        int sum = 0;

        for(int i = 1; i <= Math.sqrt(num); i++)
        {
            if(num % i == 0)
            {
                int pair = num / i;

                if(i != num) sum += i; //if 
                if(pair != i && pair != num) sum += pair;
            }
        }
        System.out.print(num + " ");
        Aliquot(sum);
    }

    public void Prime(int num)
    {
        for(int i = 2; i <= num; i++)
        {
            boolean isPrime = true;
            for(int j = 2; j <= Math.sqrt(i); j++)
            {
                if(i % j == 0)
                {
                    isPrime = false;
                    break;
                } 
            }
            if(isPrime)
                System.out.print(i + " ");
        }
    }
    //method to print exact num prime numbers
    public void PrimeSeries(int num)
    {
        int count = 0;
        int i = 2;
        while(count < num)
        {
            boolean isPrime = true;
            for(int j = 2; j <= Math.sqrt(i); j++)
            {
                if(i % j == 0)
                {
                    isPrime = false;
                    break;
                } 
            }
            if(isPrime)
            {
                System.out.print(i + " ");
                count++;
            }
            i++;
        }
    }


    public static void main(String[] args) {
        Sequence instance = new Sequence();
        // instance.Juggler(3);
        //instance.Padovan(10);
        //instance.Aliquot(10);
        //instance.PrimeSeries(100);
    }
}
