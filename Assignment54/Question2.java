import java.util.Scanner;

class MyArray
{
    public void SumArray(int arr[])
    {
        // Traverse array
        for(int i = 0; i < arr.length; i = i + 1)
        {
            int num = arr[i];
            int sum = 0;

            // Summation of digits
            while(num != 0)
            {
                int digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }

            // Replace original element with summation of its digits
            arr[i] = sum;
        }
    }
}

class Question2
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
        mobj.SumArray(Arr);

        System.out.println("Array after replacing each number with sum of digits : ");
        for(int i = 0; i < Arr.length; i = i + 1)
        {
            System.out.print(Arr[i] + " ");
        }

        Arr = null;
    }
}