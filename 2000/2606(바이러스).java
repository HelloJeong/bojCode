import java.util.Scanner;

public class Main {
    static int[][] graph;
    static boolean visited[];
    static int N;
    static int E;
    static int Count;
    
    public static void dfs(int i)
    {
        visited[i] = true;
        Count++;
        for (int j = 1; j <= N; j++)
        {
            if (graph[i][j] == 1 && visited[j] == false)
                dfs(j);
        }
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        graph = new int[N+1][N+1];
        E = sc.nextInt();
        visited = new boolean[N+1];
        
        int a, b;
        
        for (int i = 1; i <= E; i++)
        {
            a = sc.nextInt();
            b = sc.nextInt();
            
            graph[a][b] = graph[b][a] = 1;
        }
        
        dfs(1);
        
        System.out.println(Count-1);
    }
}
