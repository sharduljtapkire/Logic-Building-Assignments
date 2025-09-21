import java.util.Scanner;

class MyArray
{
    public void productArray(int arr[], int n)
    {
        int left[] = new int[n];
        int right[] = new int[n];
        int prod[] = new int[n];

        left[0] = 1;
        right[n-1] = 1;

        for(int i=1; i<n; i++)
        {
            left[i] = arr[i-1] * left[i-1];
        }

        for(int j=n-2; j>=0; j--)
        {
            right[j] = arr[j+1] * right[j+1];
        }

        for(int i=0; i<n; i++)
        {
            prod[i] = left[i] * right[i];
            System.out.print(prod[i] + " ");
        }
        System.out.println();
    }
}

class Question2
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
        System.out.println("The product array is : ");
        obj.productArray(arr, n);
    }
}
