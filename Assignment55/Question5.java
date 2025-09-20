import java.util.Scanner;

class MyArray
{
    public void Pattern(int Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i]; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

class Question5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements in the array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements of the array : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Pattern(Arr);

        Arr = null;
    }
}