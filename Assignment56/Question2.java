import java.util.*;

class StringX
{
    public void DisplayFrequency(String str)
    {
        String words[] = str.split("\\s+");
        HashMap<String,Integer> hmap = new HashMap<>();

        for(String word : words)
        {
            word = word.trim();
            hmap.put(word, hmap.getOrDefault(word, 0) + 1);
        }

        for(Map.Entry<String,Integer> entry : hmap.entrySet())
        {
            System.out.println(entry.getKey() + " : " + entry.getValue());
        }
    }
}

class Question2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        obj.DisplayFrequency(str);
    }
}
