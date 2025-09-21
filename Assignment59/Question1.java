import java.util.Scanner;

class MatrixOperations
{
    public void addMatrices(int[][] mat1, int[][] mat2, int rows, int cols)
    {
        int[][] sum = new int[rows][cols];

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        System.out.println("Sum of the matrices is:");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                System.out.print(sum[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

class Question1
{
    public static void main(String A[])
    {
        int rows, cols;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        rows = sc.nextInt();
        System.out.print("Enter number of columns: ");
        cols = sc.nextInt();

        int[][] mat1 = new int[rows][cols];
        int[][] mat2 = new int[rows][cols];

        System.out.println("Enter elements of first matrix:");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                System.out.print("Enter element [" + (i + 1) + "][" + (j + 1) + "]: ");
                mat1[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter elements of second matrix:");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                System.out.print("Enter element [" + (i + 1) + "][" + (j + 1) + "]: ");
                mat2[i][j] = sc.nextInt();
            }
        }
        
        MatrixOperations obj = new MatrixOperations();
        obj.addMatrices(mat1, mat2, rows, cols);
    }
}