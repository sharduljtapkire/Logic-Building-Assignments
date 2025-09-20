import java.util.Scanner;

class MyArray
{
    public void ArrayReplace(char Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')   // check if capital
            {
                Arr[i] = (char)(Arr[i] + 32);    // convert to small
            }
        }

        System.out.println("Output after replacement:");
        for(char ch : Arr)
        {
            System.out.print(ch + " ");
        }
        System.out.println();
    }
}

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of characters : ");
        int iSize = sobj.nextInt();

        char Arr[] = new char[iSize];

        System.out.println("Enter the characters : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.next().charAt(0);
        }

        MyArray mobj = new MyArray();
        mobj.ArrayReplace(Arr);

        Arr = null;
    }
}
