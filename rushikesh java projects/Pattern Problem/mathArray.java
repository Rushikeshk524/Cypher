import java.util.Arrays;

public class mathArray
{
    public int LCM(int a, int b)
    {
        int max = Math.max(a, b);
        int min = Math.min(a, b);
        for(int i = 1; i <= a * b; i++)
        {
            if(max * i % min == 0) return max * i;
        }
        return a * b;
    }

    public int GCD(int a, int b)
    {
        if(b == 0 || a == 0)
            return Math.max(a, b);

        int min = Math.min(a, b);

        while(min > 0)
        {
            if(a % min == 0 && b % min == 0) break;

            min--;
        }
        return min;

    }

    public int LCMArray(int arr[], int idx)
    {
        if(idx == arr.length - 1) return arr[idx];

        int num1 = arr[idx];
        int num2 = LCMArray(arr, idx + 1);
        return (num1 * num2 / GCD(num1, num2));
    }
    //GCD(num1, num2) * LCM(num1 num2) = num1 * num2
    public int GCDArray(int arr[], int idx)
    {
        if(idx == arr.length - 1) return arr[idx];

        int num1 = arr[idx];
        int num2 = GCDArray(arr, idx + 1);
        return (num1 * num2 / LCM(num1, num2));
    }
    public static void main(String args[])
    {
        int arr[] = {16, 2, 8};
        mathArray instance = new mathArray();
        //int result = instance.LCMArray(arr, 0);
        int result = instance.GCDArray(arr,0);
        System.out.println(result);
    }
}