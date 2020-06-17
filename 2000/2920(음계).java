import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        String[] result = str.split(" ");
        
        str = "";
        for(int i = 0; i < 8; i++)
            str += result[i];
        
        if(str.equals("12345678"))
            System.out.println("ascending");
        else if(str.equals("87654321"))
            System.out.println("descending");
        else
            System.out.println("mixed");
    }
}
