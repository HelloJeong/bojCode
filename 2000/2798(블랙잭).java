import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int arr[] = new int[n];
        int sum = 0;
        for(int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                for(int k = j+1; k < n; k++) {
                    int t = arr[i] + arr[j] + arr[k];
                    if(t > sum && t < m)
                        sum = t;
                    else if(t == m) {
                        System.out.println(m);
                        return;
                    }
                }
            }
        }
        System.out.println(sum);
    }
}
