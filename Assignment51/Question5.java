import java.util.Scanner;

class MatrixOperations 
{
    public int sumOfBorderElements(int[][] matrix, int iRow, int iCol) 
    {
        if (iRow == 0 || iCol == 0) 
        {
            return 0;
        }

        int sum = 0;
       
        for (int j = 0; j < iCol; j++) 
        {
            sum = sum + matrix[0][j];
            if (iRow > 1) 
            {
                sum = sum + matrix[iRow - 1][j]; 
            }
        }

       
        for (int i = 1; i < iRow - 1; i++) 
        {
            sum = sum + matrix[i][0]; 
            if (iCol > 1) 
            {
                sum = sum + matrix[i][iCol - 1]; 
            }
        }

        return sum;
    }
}

class Question5 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        int[][] matrix = new int[iRow][iCol];

        System.out.println("Enter elements of the matrix:");
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                matrix[i][j] = sobj.nextInt();
            }
        }
        
        MatrixOperations mobj = new MatrixOperations();

        int sum = mobj.sumOfBorderElements(matrix, iRow, iCol);

        System.out.println("\nSum of the border elements is: " + sum);
    }
}