import java.util.Scanner;

class Fibonacci
{
    public void printFibonacci(int n)
    {
        int a = 0, b = 1, c;
        System.out.print(a + " " + b);

        for (int i = 2; i < n; i++)
        {
            c = a + b;
            System.out.print(" " + c);
            a = b;
            b = c;
        }
    }
}

public class Question3
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        int terms = sc.nextInt();

        Fibonacci obj = new Fibonacci();
        obj.printFibonacci(terms);
    }
}