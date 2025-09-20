import java.util.Scanner;

class MyArray
{
    public boolean ChkPalindrome(int arr[])
    {
        int iStart = 0;
        int iEnd = arr.length - 1;
        boolean bFlag = true;

        while(iStart < iEnd)
        {
            if(arr[iStart] != arr[iEnd])
            {
                bFlag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
    }
}

class Question5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements for the array: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements for the array: ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        boolean bRet = mobj.ChkPalindrome(Arr);

        if(bRet == true)
        {
            System.out.println("The array is a palindrome.");
        }
        else
        {
            System.out.println("The array is not a palindrome.");
        }
        
        Arr = null;
    }
}