import java.util.Scanner;

class ReverseEachWord
{
    String reverseWord(String inputString)
    {
        // Split the input string by spaces to get an array of words
        String[] words = inputString.split(" ");
        String reversedString = "";

        // Iterate through each word
        for (String word : words)
        {
            String reversedWord = "";
            // Reverse the current word
            for (int i = word.length() - 1; i >= 0; i--)
            {
                reversedWord = reversedWord + word.charAt(i);
            }
            // Add the reversed word and a space to the final string
            reversedString = reversedString + reversedWord + " ";
        }

        // Return the final string, trimming any trailing space
        return reversedString.trim();
    }
}

class Question3
{
    public static void main(String A[])
    {
        ReverseEachWord rev = new ReverseEachWord();
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter String : ");
        String str = sc.nextLine();
        
        System.out.println("Input String : " + str);
        System.out.println("String with Reversed Words : " + rev.reverseWord(str));
    }
}