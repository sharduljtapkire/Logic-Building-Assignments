import java.util.Scanner;

class MyArray
{
    public void ReverseArray(int arr[])
    {
        // Traverse array
        for(int i = 0; i < arr.length; i = i + 1)
        {
            int num = arr[i];
            int rev = 0;

            // Reverse logic
            while(num != 0)
            {
                int digit = num % 10;
                rev = (rev * 10) + digit;
                num = num / 10;
            }

            // Replace original element with reversed number
            arr[i] = rev;
        }
    }
}

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int size = sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter elements : ");
        for(int i = 0; i < Arr.length; i = i + 1)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.ReverseArray(Arr);

        System.out.println("Array after reversing each number : ");
        for(int i = 0; i < Arr.length; i = i + 1)
        {
            System.out.print(Arr[i] + " ");
        }

        Arr = null;
    }
}