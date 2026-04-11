import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

public class romanNum {
    /*
    I = 1
    V = 5
    X = 10
    L = 50
    C = 100
    D = 500
    M = 1000
    */

    static String IntToRoman(int num)
    {
        String ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        String tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        String hnrs[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

        String ths[] = {"", "M", "MM", "MMM"};

        return ths[num/1000] + hnrs[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }


    static String intToRoman(int num) 
    {
        final int[] values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        final String[] symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < values.length; i++) 
        {
            if (num == 0)
                break;
            while (num >= values[i]) 
            {
                sb.append(symbols[i]);
                num -= values[i];
            }
        }

        return sb.toString();        
    }
    static int RomanToInt(String s)
    {
        int result = 0;
        Map<Character, Integer> rom = new HashMap<>();
        rom.put('I', 1);
        rom.put('V', 5);
        rom.put('X', 10);
        rom.put('L', 50);
        rom.put('C', 100);
        rom.put('D', 500);
        rom.put('M', 1000);        

        for(int i = 0; i < s.length() - 1; i++)
        {
            if(rom.get(s.charAt(i)) < rom.get(s.charAt(i + 1)))
            {
                result -= rom.get(s.charAt(i));
            }
            else
            {
                result += rom.get(s.charAt(i));
            }
        }

        return result + rom.get(s.charAt(s.length() - 1));
    }

    public static void main(String[] args) {
        int num = 3749;
        System.out.println(romanNum.IntToRoman(num));
        System.out.println(romanNum.intToRoman(num));
        System.out.println(romanNum.RomanToInt("MMMDCCXLIX"));

    }
}
