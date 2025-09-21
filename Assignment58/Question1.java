import java.util.Scanner;

class Pattern2
{
    private int num;

    public void setNum(int num)
    {
        this.num = num;
    }

    public int getNum()
    {
        return this.num;
    }

    
    public void inputNum()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int userInput = sc.nextInt();
        this.setNum(userInput);
    }

   
    public void printAnswer()
    {
        for (int i = 1; i <= this.num; i++)
        {
            char ch = 'A';
            
           
            for (int j = 1; j <= this.num - i; j++)
            {
                System.out.print(" ");
            }

           
            for (int k = 1; k <= i; k++)
            {
                System.out.print(ch);
                ch++;
            }

           
            ch--; 

            
            for (int m = 1; m < i; m++)
            {
                ch--;
                System.out.print(ch);
            }
            
            System.out.println(); 
        }
    }
}

class Question1
{
    public static void main(String A[])
    {
        Pattern2 ob = new Pattern2();
        ob.inputNum();
        ob.printAnswer();
    }
}