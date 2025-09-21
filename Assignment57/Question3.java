import java.util.Scanner;

class MyArray
{
    public void segregateEvenOdd(int arr[])
    {
        int left = 0, right = arr.length - 1;
        while(left < right)
        {
            while(arr[left] % 2 == 0 && left < right)
            {
                left++;
            }
            while(arr[right] % 2 == 1 && left < right)
            {
                right--;
            }    

            if(left < right)
            {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }
        }
    }
}

class Question3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int n = sobj.nextInt();

        int arr[] = new int[n];
        System.out.println("Enter elements : ");
        for(int i=0; i<n; i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray obj = new MyArray();
        obj.segregateEvenOdd(arr);

        System.out.println("Array after segregation : ");
        for(int val : arr)
        {
            System.out.print(val + " ");
        }
    }
}
