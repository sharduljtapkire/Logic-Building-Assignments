import java.util.Scanner;

class MyArray
{
    public void SumArray(int Arr1[], int Arr2[])
    {
        int sum1 = 0, sum2 = 0;

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

        System.out.println("Summation of first array is : " + sum1);
        System.out.println("Summation of second array is : " + sum2);
    }
}

class Question5
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
        mobj.SumArray(Arr1, Arr2);

        Arr1 = null;
        Arr2 = null;
    }
}