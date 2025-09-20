import java.util.Scanner;

class MyArray
{
    public int Difference(char Arr[])
    {
        int capitalCount = 0;
        int smallCount = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')  
            {
                capitalCount++;
            }
            else if(Arr[i] >= 'a' && Arr[i] <= 'z')   
            {
                smallCount++;
            }
        }

        return capitalCount - smallCount;
    }
}

class Question4
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
        int iRet = mobj.Difference(Arr);

        System.out.println("Difference between frequency of capital and small letters is : " + iRet);

        Arr = null;
    }
}
