import java.util.Scanner;

class MyArray
{
    public void Percentage(float arr[])
    {
        // Traverse array
        for(int i = 0; i < arr.length; i = i + 1)
        {
            float marks = arr[i];

            // Print marks and class in the same line
            if(marks < 35.0f)
            {
                System.out.println(marks + " -> Fail");
            }
            else if(marks < 50.0f)
            {
                System.out.println(marks + " -> Pass class");
            }
            else if(marks < 60.0f)
            {
                System.out.println(marks + " -> Second class");
            }
            else if(marks < 70.0f)
            {
                System.out.println(marks + " -> First class");
            }
            else
            {
                System.out.println(marks + " -> First class with Distinction");
            }
        }
    }
}

class Question4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of students : ");
        int n = sobj.nextInt();

        float Arr[] = new float[n];

        System.out.println("Enter marks of students : ");
        for(int i = 0; i < Arr.length; i = i + 1)
        {
            Arr[i] = sobj.nextFloat();
        }

        MyArray mobj = new MyArray();
        mobj.Percentage(Arr);

        Arr = null;
    }
}