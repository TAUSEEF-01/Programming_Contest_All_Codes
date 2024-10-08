// accepted

import java.util.*;

public class B_Biridian_Forest {

    static int dx[] = { -1, 1, 0, 0 };
    static int dy[] = { 0, 0, -1, 1 };

    static int r, c;
    static int x, y;
    static int myX, myY;

    static int M = 1005;
    static boolean vis[][] = new boolean[M][M];
    static int level[][] = new int[M][M];

    static String a[] = new String[M];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        solve(sc);
        sc.close();
    }

    public static void solve(Scanner sc) {
        r = sc.nextInt();
        c = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < r; i++) {
            a[i] = sc.nextLine();

            for (int j = 0; j < c; j++) {
                vis[i][j] = false;

                if (a[i].charAt(j) == 'E') {
                    x = i;
                    y = j;
                }
                if (a[i].charAt(j) == 'S') {
                    myX = i;
                    myY = j;
                }
            }
        }

        bfs();

        int ans = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (vis[i][j] == true && (a[i].charAt(j) >= '0' && a[i].charAt(j) <= '9')
                        && level[i][j] <= level[myX][myY]) {
                    ans += (a[i].charAt(j) - '0');
                }
            }
        }

        System.out.println(ans);
    }

    public static class Pair {
        int x, y;

        Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    public static boolean isValid(int x, int y) {
        if (x >= 0 && x < r && y >= 0 && y < c && a[x].charAt(y) != 'T' && !vis[x][y])
            return true;

        return false;
    }

    public static void bfs() {
        Queue<Pair> q = new LinkedList<>();
        q.add(new Pair(x, y));
        vis[x][y] = true;
        level[x][y] = 0;

        while (!q.isEmpty()) {
            Pair p = q.remove();
            int x = p.x;
            int y = p.y;

            for (int i = 0; i < 4; i++) {
                int xx = x + dx[i];
                int yy = y + dy[i];

                if (isValid(xx, yy)) {
                    vis[xx][yy] = true;
                    level[xx][yy] = level[x][y] + 1;
                    q.add(new Pair(xx, yy));
                }
            }
        }
    }
}