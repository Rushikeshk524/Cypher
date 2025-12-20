import java.io.*;
import java.util.*;

public class Java2 {
    public static void main(String args[]) throws IOException { //exception handling is important  else code will not work
        
        Scanner sc = new Scanner(System.in); 
        //Scanner can read input form System.in and converts to data types without exceptional handling.
        
        System.out.println("Enter thorugh Scanner : ");
        int num1 = sc.nextInt(); //InputMismatchException

        BufferedReader bw = new BufferedReader(new InputStreamReader(System.in)); 
        //BufferedReader can only read charecters not bytes, cant specify any datatype and requiers exception handling or else the code will not compile.
        //we use InputStreamReader to bridge the gap,  to use ISR to take input form System.in that is our keyboard and forwards to BufferedReader
        // it has methods like read() for Integer , readLine()  for Strings and close() to close or stop any input.
        //Application: For readling Text files or Keyboard ONLY 

        System.out.println("Enter through BufferedReader: ");
        int num2 = Integer.parseInt(bw.readLine()); //NumberFormatException
        //"readline()"is a method that belongs to BufferedReader
        // parseInt() is a method of Integer class that converts the number parts in String into Integers (java.lang.Integer)

        DataInputStream ds = new DataInputStream(System.in);
        //DataInputStream is same as Scanner it also reads data from System.in and can convert to data types but pingle uses deprecated methods because he is also deprecated.
        //it contents methods like readInt() , readChar(), readByte() , readLong, readBoolean() , readLine() and close.
        //Application: Use for readng Binary or primitive data type files

        System.out.println("Enter thorugh DataInputStream: ");
        int num3 = Integer.parseInt(ds.readLine()); //NumberFormatException

        System.out.println(+num1+ " + " + num2 + " + " + num3 + " = " + (num1 + num2 + num3));
        sc.close();
        ds.close();
        bw.close();
    }
}
