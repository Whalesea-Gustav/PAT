import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
public class ReaderDemo {
    static BufferedReader in;

    static void init(InputStream inStream) {
        in = new BufferedReader(new InputStreamReader(inStream));
    }

    static String nextLine() {
        try {
            return in.readLine();
        } catch (IOException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static void main(String[] args) {
        ReaderDemo.init(System.in);

        System.out.println("Please input string");
        String line1 = ReaderDemo.nextLine();
        System.out.println(line1);

    }
}
