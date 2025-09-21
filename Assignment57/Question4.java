import java.util.Scanner;

class MyArray
{
    public int equilibrium(int arr[], int n)
    {
        int totalSum = 0, leftSum = 0;
        for(int val : arr)
        {
            totalSum += val;
        }

        for(int i=0; i<n; i++)
        {
            totalSum -= arr[i]; 

            if(leftSum == totalSum)
                return i;

            leftSum += arr[i];
        }
        return -1;
    }
}

class Question4
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
        int ans = obj.equilibrium(arr, n);

        System.out.println("First equilibrium index is : " + ans);
    }
}
