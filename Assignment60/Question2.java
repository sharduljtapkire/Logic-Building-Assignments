import java.util.Scanner;

class MatrixMultiplication
{
    public void multiplyMatrices(int[][] mat1, int[][] mat2, int r1, int c1, int r2, int c2)
    {
        if (c1 != r2)
        {
            System.out.println("Matrices cannot be multiplied.");
            return;
        }

        int[][] product = new int[r1][c2];

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    product[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        System.out.println("Product of the matrices is:");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                System.out.print(product[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

class Question2
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter rows for first matrix: ");
        int r1 = sc.nextInt();
        System.out.print("Enter columns for first matrix: ");
        int c1 = sc.nextInt();
        System.out.print("Enter rows for second matrix: ");
        int r2 = sc.nextInt();
        System.out.print("Enter columns for second matrix: ");
        int c2 = sc.nextInt();

        int[][] mat1 = new int[r1][c1];
        int[][] mat2 = new int[r2][c2];

        System.out.println("Enter elements of first matrix:");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                System.out.print("Enter element [" + (i + 1) + "][" + (j + 1) + "]: ");
                mat1[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter elements of second matrix:");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                System.out.print("Enter element [" + (i + 1) + "][" + (j + 1) + "]: ");
                mat2[i][j] = sc.nextInt();
            }
        }
        
        MatrixMultiplication obj = new MatrixMultiplication();
        obj.multiplyMatrices(mat1, mat2, r1, c1, r2, c2);
    }
}