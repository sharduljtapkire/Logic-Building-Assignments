import java.util.Scanner;

class MyArray
{
    public int[] ArrayConcat(int Arr1[], int Arr2[])
    {
        int iSize1 = Arr1.length;
        int iSize2 = Arr2.length;

        // Allocate new array with combined size
        int result[] = new int[iSize1 + iSize2];

        int iCnt = 0, j = 0;

        // Copy first array into result
        for(iCnt = 0; iCnt < iSize1; iCnt++)
        {
            result[j] = Arr1[iCnt];
            j++;
        }

        // Copy second array into result
        for(iCnt = 0; iCnt < iSize2; iCnt++)
        {
            result[j] = Arr2[iCnt];
            j++;
        }

        return result;
    }
}

class Question4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements for first array : ");
        int iSize1 = sobj.nextInt();

        int Arr1[] = new int[iSize1];
        int iCnt = 0;

        System.out.println("Enter the elements for first array : ");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter number of elements for second array : ");
        int iSize2 = sobj.nextInt();

        int Arr2[] = new int[iSize2];

        System.out.println("Enter the elements for second array : ");
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        int Result[] = mobj.ArrayConcat(Arr1, Arr2);

        System.out.println("Contents of new concatenated array are : ");
        for(iCnt = 0; iCnt < Result.length; iCnt++)
        {
            System.out.print(Result[iCnt] + "\t");
        }
        System.out.println();

        Arr1 = null;
        Arr2 = null;
        Result = null;
    }
}