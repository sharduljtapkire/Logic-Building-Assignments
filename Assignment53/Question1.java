import java.util.Scanner;

class MyArray
{
    public int DiffArray(int Arr1[], int Arr2[])
    {
        int sum1 = 0, sum2 = 0 , Diff = 0;

        // Traverse first array
        for(int i = 0; i < Arr1.length; i++)
        {
            sum1 = sum1 + Arr1[i];
        }

        // Traverse second array
        for(int i = 0; i < Arr2.length; i++)
        {
            sum2 = sum2 + Arr2[i];
        }

        Diff = sum1 - sum2;

        return Diff;
    }
}

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements for first array : ");
        int iSize1 = sobj.nextInt();

        int Arr1[] = new int[iSize1];
        int iCnt = 0 , iRet = 0;

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
        iRet = mobj.DiffArray(Arr1, Arr2);

        System.out.println("Difference Between Summation Of Arrays : "+iRet);

        Arr1 = null;
        Arr2 = null;
    }
}