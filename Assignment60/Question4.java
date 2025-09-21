import java.io.*;

class FileMerger
{
    public void mergeFiles(String file1, String file2, String file3) throws IOException
    {
        BufferedReader br1 = new BufferedReader(new FileReader(file1));
        BufferedReader br2 = new BufferedReader(new FileReader(file2));
        BufferedWriter bw = new BufferedWriter(new FileWriter(file3));

        String line1 = br1.readLine();
        String line2 = br2.readLine();

        while (line1 != null || line2 != null)
        {
            if (line1 != null)
            {
                bw.write(line1);
                bw.newLine();
                line1 = br1.readLine();
            }

            if (line2 != null)
            {
                bw.write(line2);
                bw.newLine();
                line2 = br2.readLine();
            }
        }

        br1.close();
        br2.close();
        bw.close();
        
        System.out.println("Files merged successfully!");
    }
}

public class Question4
{
    public static void main(String A[])
    {
        FileMerger obj = new FileMerger();
        try
        {
            obj.mergeFiles("file1.txt", "file2.txt", "file3.txt");
        }
        catch (IOException e)
        {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}