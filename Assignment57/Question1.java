import java.util.Scanner;

class MyArray
{
    public int maxDiff(int arr[])
    {
        int minValue = arr[0];
        int maxDiff = arr[1] - arr[0];

        for(int i = 1; i < arr.length; i++)
        {
            if(arr[i] - minValue > maxDiff)
            {
                maxDiff = arr[i] - minValue;
            }
            if(arr[i] < minValue)
            {
                minValue = arr[i];
            }
        }
        return maxDiff;
    }
}

class Question1
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
        int ans = obj.maxDiff(arr);

        System.out.println("Maximum difference is : " + ans);
    }
}
