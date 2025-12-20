class Demo
{
	public void welcome(int i, int j)
	{
		System.out.println("I + J"+i+ " "+j);
	}

	public void welcome(double p, double q)
	{
		System.out.println("P + Q"+p+ " "+q);
	}
}

class DemoMethodload extends Demo
{
	public static void main(String args[])
	{
		Demo d1 = new Demo(); //to call method we create objects
		d1.welcome(10,20); //calling welcome method of int datatype

        d1.welcome(10.50, 20.30); //calling welcome method of double datatype               
	}
}