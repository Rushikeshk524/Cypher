public class pattern1{

    public void HollowRectangle(int col, int row)
    {
        /*
        * * * * *
        *       *
        *       *
        *       *
        * * * * *
        */
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < row; j++)
            {
                if(i == 0 || j == 0 || i == col - 1 || j == row - 1)
                {
                    System.out.print("* ");
                }
                else
                {
                    System.out.print("  ");
                }
            }
            System.out.print("\n");
        }
    }

    public void Pyramid(int height)
    {
        /*
        *
        * *
        * * *
        * * * *
        */
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                System.out.print(" * ");
            }
            System.out.print("\n");
        }
    }

    public void InvertedPyramid(int height)
    {
        /*
        * * * * *
        * * * * 
        * * * 
        * * 
        * 
        */
        for(int i = height; i > 0; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(" * ");
            }
            System.out.print("\n");
        }
    }

    public void InvertedPyramid180(int height)
    {
        /*
                * 
              * *
            * * *
          * * * *
        * * * * *
            OR
           *
          * * 
         * * *
        * * * * 
       * * * * *
        */
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < height - 1 - i; j++)//Loop for Spaces
            {
                System.out.print(" ");
            }
            for(int j = 0; j <= i; j++)//Loop for *
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }

    public void NumPyramid(int height)
    {
        /*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
        */
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                System.out.print(j+1 +" ");
            }
            System.out.print("\n");
        }
    }

    public void InvertedNumPyramid(int height)
    {
        /*
        1 2 3 4 5 
        1 2 3 4 
        1 2 3 
        1 2 
        1 
        */
        for(int i = height; i > 0; i--)
        {
            for(int j = 0; j < i; j++)
            {
                System.out.print(j + 1 +" ");
            }
            System.out.print("\n");
        }
    }

    public void FloydTriangle(int height)
    {
        /*
        1
        2 3
        4 5 6 
        7 8 9 10
        11 12 13 14 15
        */
        int count = 1;
        for(int i = 0; i < height; i++)
        {   
            for(int j = 0; j <= i; j++)
            {
                System.out.print(count+ " ");
                count++;
            }
            System.out.print("\n");
        }
    }

    public void MatTriangle(int height)
    {
        /*
        1 
        0 1 
        1 0 1 
        0 1 0 1 
        1 0 1 0 1 
        */
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if((i + j)%2 == 0)
                {
                    System.out.print("1 ");
                }
                else if((i + j)%2 == 1)
                {
                    System.out.print("0 ");
                }
            }
            System.out.print("\n");
        }
    }

    public static void main(String[] args) 
    {
        pattern1 instance = new pattern1();
        // instance.HollowRectangle(5, 5);
        // instance.Pyramid(4);
        // instance.InvertedPyramid(4);
        // instance.InvertedPyramid180(10);
        // instance.NumPyramid(5);
        // instance.InvertedNumPyramid(5);
        // instance.FloydTriangle(5);
         instance.MatTriangle(5);
    }   
       
}