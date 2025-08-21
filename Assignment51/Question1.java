import java.util.Scanner;


class MatrixOperations 
{
   
    public void swapConsecutiveRows(int[][] matrix, int iRow, int iCol) 
    {
        for(int i = 0; i < iRow - 1; i = i + 2) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i + 1][j];
                matrix[i + 1][j] = temp;
            }
        }
    }

    
    public void displayMatrix(int[][] matrix, int iRow, int iCol) 
    {
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol ; j++) 
            {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}


class Question1 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iValue1 = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iValue2 = sobj.nextInt();

        int[][] matrix = new int[iValue1][iValue2];

        System.out.println("Enter elements of matrix:");
        for (int i = 0; i < iValue1; i++) 
        {
            for (int j = 0; j < iValue2; j++) 
            {
                matrix[i][j] = sobj.nextInt();
            }
        }

        MatrixOperations mobj = new MatrixOperations();

        System.out.println("\nOriginal Matrix:");
        
        mobj.displayMatrix(matrix, iValue1, iValue2);

       
        mobj.swapConsecutiveRows(matrix, iValue1, iValue2);

        System.out.println("\nMatrix after swapping consecutive rows:");
        
        mobj.displayMatrix(matrix, iValue1, iValue2);
    }
}