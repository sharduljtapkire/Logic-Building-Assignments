import java.util.Scanner;

class MyArray
{
    public int[] CopyArray(int arr1[], int arr2[])
    {
        // Allocate memory for new array (size = arr1 + arr2)
        int newArr[] = new int[arr1.length + arr2.length];

        int j = 0;

        // Copy elements of first array
        for(int i = 0; i < arr1.length; i = i + 1)
        {
            newArr[j] = arr1[i];
            j = j + 1;
        }

        // Copy elements of second array
        for(int i = 0; i < arr2.length; i = i + 1)
        {
            newArr[j] = arr2[i];
            j = j + 1;
        }

        // Return new array
        return newArr;
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

        System.out.println("Enter the elements for first array : ");
        for(int i = 0; i < Arr1.length; i = i + 1)
        {
            Arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter number of elements for second array : ");
        int iSize2 = sobj.nextInt();

        int Arr2[] = new int[iSize2];

        System.out.println("Enter the elements for second array : ");
        for(int i = 0; i < Arr2.length; i = i + 1)
        {
            Arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        int CopyArr[] = mobj.CopyArray(Arr1, Arr2);

        // Display copied array
        System.out.println("Copied array : ");
        for(int i = 0; i < CopyArr.length; i = i + 1)
        {
            System.out.print(CopyArr[i] + " ");
        }

        Arr1 = null;
        Arr2 = null;
        CopyArr = null;
    }
}
