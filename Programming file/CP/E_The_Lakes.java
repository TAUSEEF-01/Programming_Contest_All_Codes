// accepted
// https://codeforces.com/contest/1829/problem/E

import java.util.*;

public class E_The_Lakes {
    public static int adj[][];
    public static boolean vis[][];
    public static int dx[] = { -1, 1, 0, 0 };
    public static int dy[] = { 0, 0, -1, 1 };
    public static int n, m;

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            solve(sc);
        }

        sc.close();
    }

    public static void solve(Scanner sc) {
        n = sc.nextInt();
        m = sc.nextInt();

        adj = new int[n][m];
        vis = new boolean[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                vis[i][j] = true;
                adj[i][j] = sc.nextInt();
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == true && adj[i][j] != 0) {
                    ans = Math.max(ans, dfs(i, j));
                }
            }
        }

        System.out.println(ans);
    }

    public static int dfs(int i, int j) {
        int sum = 0;
        Stack<int[]> stack = new Stack<>();
        stack.push(new int[] { i, j });

        while (!stack.isEmpty()) {
            int[] current = stack.pop();
            int x = current[0];
            int y = current[1];

            if (adj[x][y] == 0 || !vis[x][y]) {
                continue;
            }

            sum += adj[x][y];
            vis[x][y] = false;

            for (int k = 0; k < 4; k++) {
                int ii = x + dx[k];
                int jj = y + dy[k];
                if (ii >= 0 && ii < n && jj >= 0 && jj < m && vis[ii][jj]) {
                    stack.push(new int[] { ii, jj });
                }
            }
        }
        return sum;
    }

}