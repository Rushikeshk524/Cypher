public class AdvancePattern {

    public void Butterfly(int height)
    {
        /*
        *                 * 
        * *             * * 
        * * *         * * * 
        * * * *     * * * * 
        * * * * * * * * * * 
        * * * * * * * * * * 
        * * * *     * * * * 
        * * *         * * * 
        * *             * * 
        *                 * 
        */
        for(int i = 0; i < height; i++)
        {
            
            for(int j = 0; j <= i; j++)
            {
                System.out.print("* ");
            }
            for(int j = 0; j < 2*(height - 1 - i); j++)
            {
                System.out.print("  ");
            }
            for(int j = 0; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
        //
        for(int i = height; i >= 0; i--)
        {
            
            for(int j = 0; j < i; j++)
            {
                System.out.print("* ");
            }
            for(int j = 0; j < 2*(height - i); j++)
            {
                System.out.print("  ");
            }
            for(int j = 0; j < i; j++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
    
    public void Rhombus(int height)
    {
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < height - i; j++)
            {
                System.out.print(" ");
            }
            for(int j = 0; j < height; j++)
                {
                    System.out.print("* ");
                }
            System.out.print("\n");
        }
    }

    public void NumPyramid(int height)
    {
        for(int i = 0; i < height; i++)
        {
            for(int j = height; j > i; j--)
            {
                System.out.print(" ");
            }
            for(int j = 0; j <= i; j++)
            {
                System.out.print(i + 1 +" ");
            }
            System.out.print("\n");
        }
    }

    public void Palindrome(int height)
    {
        /*
            1 
          2 1 2 
        3 2 1 2 3 
      4 3 2 1 2 3 4 
    5 4 3 2 1 2 3 4 5 
        */
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < height - i - 1; j++)
            {
                System.out.print("  ");
            }
            for(int j = i + 1; j > 1; j--)
            {
                System.out.print(j +" ");
            }
            for(int j = 0; j <= i; j++)
            {
                System.out.print(j + 1 + " ");
            }
            System.out.print("\n");
        }
    }

    public void Diamond(int height)
    {
        /*
          * 
        * * * 
      * * * * * 
    * * * * * * * 
     * * * * * * * 
       * * * * * 
         * * * 
           * 
        */
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < height - i - 1; j++)
            {
                System.out.print("  ");
            }
            for(int j = 1; j <= i*2 + 1; j++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }

        for(int i = height - 1; i >= 0 ; i--)
        {
            for(int j = 0; j <= height - i - 1; j++)
            {
                System.out.print("  ");
            }
            for(int j = 1; j <= 2*i + 1; j++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
    public static void main(String[] args) {
        AdvancePattern instance = new AdvancePattern();
        // instance.Butterfly(5);
        // instance.Rhombus(5);
        // instance.NumPyramid(5);
        // instance.Palindrome(5);
        instance.Diamond(4);
    }

}
