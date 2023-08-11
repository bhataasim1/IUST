import java.io.File;

public class DeleteFile {
    public static void main(String[] args) {
        try {
            File f = new File("test.txt");
            if(f.delete()) {
                System.out.println("File deleted successfully");
            }
            else {
                System.out.println("Failed to delete the file");
            }
        } catch(Exception e) {
            System.out.println("An error occured");
        }
    }
}
