import java.util.Scanner;

class MyArray
{
    public int Search(char Arr[], char ch)
    {
        int iCount = 0;
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ch || Arr[i] == (char)(ch + 32) || Arr[i] == (char)(ch - 32))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class Question3
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

        System.out.println("Enter the character to search : ");
        char ch = sobj.next().charAt(0);

        MyArray mobj = new MyArray();
        int iRet = mobj.Search(Arr, ch);

        System.out.println("Occurrence of '" + ch + "' is : " + iRet);

        Arr = null;
    }
}
