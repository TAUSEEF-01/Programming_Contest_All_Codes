// accepted

import java.lang.reflect.Array;
import java.util.*;

public class D_Valid_BFS {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        solve(sc);
    }

    static void solve(Scanner sc) {
        int n = sc.nextInt();

        ArrayList<Integer> g[] = new ArrayList[n + 1];

        for (int i = 0; i <= n; i++) {
            g[i] = new ArrayList<>();
        }

        for (int i = 0; i < n - 1; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();

            g[u].add(v);
            g[v].add(u);
        }

        int order[] = new int[n + 1];
        int check[] = new int[n];

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            check[i] = x;
            order[x] = i;
        }

        boolean vis[] = new boolean[n + 1];
        for (int i = 1; i <= n; i++) {
            vis[i] = false;
            g[i].sort((a, b) -> order[a] - order[b]);
        }

        int temp[] = new int[n];

        bfs(1, g, temp, vis);

        for (int i = 0; i < n; i++) {
            if (check[i] != temp[i]) {
                System.out.println("No");
                return;
            }
        }

        System.out.println("Yes");
    }

    static void bfs(int s, ArrayList<Integer> g[], int temp[], boolean vis[]) {
        Queue<Integer> q = new LinkedList<>();
        q.add(s);
        vis[s] = true;
        int pos = 0;

        while (q.isEmpty() == false) {
            int u = q.remove();
            temp[pos++] = u;
            for (int v : g[u]) {
                if (vis[v] == false) {
                    q.add(v);
                    vis[v] = true;
                }
            }
        }
    }
}
