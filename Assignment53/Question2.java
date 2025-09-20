import java.util.Scanner;

class MyArray
{
    public void MinArray(int Arr1[], int Arr2[])
    {
        int min1 = Arr1[0];
        int min2 = Arr2[0];

        // Traverse first array
        for(int i = 1; i < Arr1.length; i = i + 1)
        {
            if(Arr1[i] < min1)
            {
                min1 = Arr1[i];
            }
        }

        // Traverse second array
        for(int i = 1; i < Arr2.length; i = i + 1)
        {
            if(Arr2[i] < min2)
            {
                min2 = Arr2[i];
            }
        }

        System.out.println("Minimum element of first array is : " + min1);
        System.out.println("Minimum element of second array is : " + min2);
    }
}

class Question2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements for first array : ");
        int iSize1 = sobj.nextInt();

        int Arr1[] = new int[iSize1];
        int iCnt = 0;

        System.out.println("Enter the elements for first array : ");
        for(iCnt = 0; iCnt < Arr1.length; iCnt = iCnt + 1)
        {
            Arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter number of elements for second array : ");
        int iSize2 = sobj.nextInt();

        int Arr2[] = new int[iSize2];

        System.out.println("Enter the elements for second array : ");
        for(iCnt = 0; iCnt < Arr2.length; iCnt = iCnt + 1)
        {
            Arr2[iCnt] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.MinArray(Arr1, Arr2);

        Arr1 = null;
        Arr2 = null;
    }
}
