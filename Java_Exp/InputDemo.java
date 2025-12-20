import java.io.DataInputStream;

class InputDemo
{
	public static void main(String args[])
	{
		int num = 0;

		DataInputStream in1 = new DataInputStream(System.in); //create object in1 to specify where to take input from (System.in means keyboard)
		try 
		{	//try because DataInputStream throws IO exception unlike scanner that handles its own exception
			System.out.println("Please enter the number:");

			num = Integer.parseInt(in1.readLine()); //in1.readline is calling the method read.line() to read the byte/keyboard and return in form of 	string AND Integer.parseInt converts the string into integer.  
			System.out.println("Entered Number is: "+num); 
		}
		catch(Exception e)
		{
			System.out.println("Error is :"+e);
		}
		finally
		{
			System.out.println("No Problem");
		}
	}
}