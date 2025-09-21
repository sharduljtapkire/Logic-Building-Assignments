import java.util.Scanner;

class Pattern
{
    public void printPattern(int n)
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i > 2)
                {
                    System.out.print("$");
                }
                System.out.print("*");
                if (i > 2)
                {
                    System.out.print("$");
                }
            }
            System.out.println();
        }
    }
}

class Question3
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();

        Pattern obj = new Pattern();
        obj.printPattern(rows);
    }
}