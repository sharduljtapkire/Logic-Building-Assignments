import java.io.*;
import java.util.Scanner;

class CharacterCounter
{
    public void countCharacters(String filePath)
    {
        try
        {
            int count = 0;
            FileReader fr = new FileReader(filePath);
            
            int c;
            while ((c = fr.read()) != -1)
            {
                count++;
            }
            
            System.out.println("Total number of characters: " + count);
            fr.close();
        }
        catch (IOException e)
        {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}

public class Question5
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter file path: ");
        String path = sc.nextLine();
        
        CharacterCounter obj = new CharacterCounter();
        obj.countCharacters(path);
    }
}