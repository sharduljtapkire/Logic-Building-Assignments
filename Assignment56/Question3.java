import java.util.*;

class StringX
{
    public String FindMaxWord(String str)
    {
        String words[] = str.split("\\s+");
        HashMap<String,Integer> hmap = new HashMap<>();

        for(String word : words)
        {
            word = word.trim();
            hmap.put(word, hmap.getOrDefault(word, 0) + 1);
        }

        String maxWord = "";
        int maxFreq = 0;

        for(Map.Entry<String,Integer> entry : hmap.entrySet())
        {
            if(entry.getValue() > maxFreq)
            {
                maxFreq = entry.getValue();
                maxWord = entry.getKey();
            }
        }

        return maxWord;
    }
}

class Question3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        String ans = obj.FindMaxWord(str);

        System.out.println("Maximum occurring word is : " + ans);
    }
}
