import java.util.Scanner;

class MyArray
{
    public int[] CopyArrayRev(int arr1[], int arr2[])
    {
        // Allocate memory for new array (combined size of both arrays)
        int newArr[] = new int[arr1.length + arr2.length];

        int j = 0;

        // Copy arr1 in reverse order
        for(int i = arr1.length - 1; i >= 0; i = i - 1)
        {
            newArr[j] = arr1[i];
            j = j + 1;
        }

        // Copy arr2 in reverse order
        for(int i = arr2.length - 1; i >= 0; i = i - 1)
        {
            newArr[j] = arr2[i];
            j = j + 1;
        }

        // Return new reversed array
        return newArr;
    }
}

class Question3
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

        int RevArr[] = mobj.CopyArrayRev(Arr1, Arr2);

        // Display the final reversed array
        System.out.println("Reversed combined array : ");
        for(int i = 0; i < RevArr.length; i = i + 1)
        {
            System.out.print(RevArr[i] + " ");
        }

        Arr1 = null;
        Arr2 = null;
        RevArr = null;
    }
}