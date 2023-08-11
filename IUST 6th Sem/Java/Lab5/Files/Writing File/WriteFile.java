import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class WriteFile {
    public static void main(String[] args) {
        try {
            File f = new File("test.txt");
            if(f.createNewFile()) {
                System.out.println("File created " + f.getName());
            } else {
                System.out.println("File already exists");
            }
            try {
                FileWriter fw = new FileWriter("test.txt");
                fw.write("This is a test file");
                fw.close();
                System.out.println("Successfully wrote to the file");
            } catch(IOException e) {
                System.out.println("An error occured");
        }
        }catch(IOException e) {
            System.out.println("An error occured");
        }
    }
}
