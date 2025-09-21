import java.util.Scanner;

class Distance
{
    int feet;
    int inches;

    
    public void getDistance(Scanner sc)
    {
        System.out.print("Enter feet: ");
        this.feet = sc.nextInt();
        System.out.print("Enter inches: ");
        this.inches = sc.nextInt();
    }

   
    public Distance addDistances(Distance d2)
    {
        Distance sum = new Distance();
        
        
        sum.inches = this.inches + d2.inches;
        
        
        sum.feet = this.feet + d2.feet;

       
        if (sum.inches >= 12)
        {
            sum.feet = sum.feet + (sum.inches / 12);
            sum.inches = sum.inches % 12;
        }
        
        return sum;
    }
}

public class Question4
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        Distance d1 = new Distance();
        Distance d2 = new Distance();

        System.out.println("Enter first distance:");
        d1.getDistance(sc);

        System.out.println("Enter second distance:");
        d2.getDistance(sc);

        Distance sum = d1.addDistances(d2);

        System.out.println("\nTotal distance is:");
        System.out.println("Feet: " + sum.feet);
        System.out.println("Inches: " + sum.inches);
    }
}