import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.InputStream;

/**Date with Holmes*/
public class Q1014 {

    public static void main(String[] args) {
        Reader.init(System.in);
        String line1 = Reader.next();
        String line2 = Reader.next();
        //System.out.println(line1);
        //System.out.println(line2);
    }

}

class Reader {
    static BufferedReader in;
    static StringTokenizer tokenizer = new StringTokenizer("");

    static void init(InputStream input) {
        in = new BufferedReader(new InputStreamReader(input));

    }

    static String next() {
        while (! tokenizer.hasMoreTokens()) {
            try {
                tokenizer = new StringTokenizer(in.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        return tokenizer.nextToken();
    }

}
