import java.util.Scanner;

class MyArray
{
    public int ArrayCapital(char arr[])
    {
        int count = 0;

        // Traverse array
        for(int i = 0; i < arr.length; i = i + 1)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                count++;
            }
        }
        return count;
    }
}

class Question3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string (characters) : ");
        String str = sobj.nextLine();

        // Convert string to character array
        char Arr[] = str.toCharArray();

        MyArray mobj = new MyArray();
        int result = mobj.ArrayCapital(Arr);

        System.out.println("Number of capital characters are : " + result);

        Arr = null;
    }
}