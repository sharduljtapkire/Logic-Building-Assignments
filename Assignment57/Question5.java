import java.util.*;

class MyArray
{
    public boolean isTriplet(int arr[], int n)
    {
        for(int i=0; i<n; i++)
        {
            arr[i] = arr[i] * arr[i];
        }

        Arrays.sort(arr);

        for(int i=n-1; i>=2; i--)
        {
            int l = 0, r = i-1;
            while(l < r)
            {
                if(arr[l] + arr[r] == arr[i])
                    return true;
                if(arr[l] + arr[r] < arr[i])
                    l++;
                else
                    r--;
            }
        }
        return false;
    }
}

class Question5
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
        boolean ans = obj.isTriplet(arr, n);

        System.out.println("Contains Pythagorean triplet : " + ans);
    }
}