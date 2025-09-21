import java.util.Scanner;

public class TransposeMatrix
{
    public static void main(String args[])
    {
        int row, col;
        Scanner sc = new Scanner(System.in);

       
        System.out.print("Input number of rows: ");
        row = sc.nextInt();
        System.out.print("Input number of columns: ");
        col = sc.nextInt();

        
        int original[][] = new int[row][col];

        
        System.out.println("Enter elements of the matrix:");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                System.out.print("Element [" + (i + 1) + "," + (j + 1) + "]: ");
                original[i][j] = sc.nextInt();
            }
        }

        
        System.out.println("\nOriginal Matrix:");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                System.out.print(original[i][j] + "\t");
            }
            System.out.println();
        }

        
        System.out.println("\n::: Transpose Matrix :::");
        int transpose[][] = new int[col][row]; 
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                transpose[j][i] = original[i][j];
            }
        }

       
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                System.out.print(transpose[i][j] + "\t");
            }
            System.out.println();
        }
        
    }
}