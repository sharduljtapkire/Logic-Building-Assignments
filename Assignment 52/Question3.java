import java.util.Scanner;

class MyArray
{
    public void DisplayOdd(int Arr1[], int Arr2[])
    {
        int iCnt = 0;

        System.out.println("Odd Elements of the first array are : ");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            if((Arr1[iCnt] % 2) != 0)
            {
                System.out.print(Arr1[iCnt]+"\t");
            }
        }

        System.out.println("\n Odd Elements of the second array are : "); 
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            if((Arr2[iCnt] % 2) != 0)
            {
                System.out.print(Arr2[iCnt]+"\t");
            }
            
        }
    }
}

class Question3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements for first array  : ");
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
        mobj.DisplayOdd(Arr1, Arr2);

        Arr1 = null;
        Arr2 = null;
    }
}
