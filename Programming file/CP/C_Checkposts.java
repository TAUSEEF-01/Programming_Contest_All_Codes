import java.io.*;
import java.util.*;

public class C_Checkposts {

    static final long MOD = 1_000_000_007;
    static final long INF = Long.MAX_VALUE;
    static final int DFS_LIMIT = 100_010;

    static ArrayList<Integer>[] g = new ArrayList[DFS_LIMIT];
    static ArrayList<Integer>[] gp = new ArrayList[DFS_LIMIT];
    static boolean[] vis = new boolean[DFS_LIMIT];
    static boolean[] vis2 = new boolean[DFS_LIMIT];
    static long mini;

    public static void dfsSt(int u, ArrayDeque<Integer> st) {
        vis[u] = true;
        for (int v : g[u]) {
            if (!vis[v]) {
                dfsSt(v, st);
            }
        }
        st.push(u);
    }

    public static void dfs(int u, Map<Long, Long> mp, long[] a) {
        vis2[u] = true;
        mp.put(a[u], mp.getOrDefault(a[u], 0L) + 1);
        mini = Math.min(mini, a[u]);
        for (int v : gp[u]) {
            if (!vis2[v]) {
                dfs(v, mp, a);
            }
        }
    }

    public static void solve(BufferedReader br, PrintWriter pw) throws IOException {
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        long[] a = new long[n];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            a[i] = Long.parseLong(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        int m = Integer.parseInt(st.nextToken());
        ArrayDeque<Integer> stack = new ArrayDeque<>();

        for (int i = 0; i < DFS_LIMIT; i++) {
            g[i] = new ArrayList<>();
            gp[i] = new ArrayList<>();
        }

        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());
            int u = Integer.parseInt(st.nextToken()) - 1;
            int v = Integer.parseInt(st.nextToken()) - 1;
            g[u].add(v);
            gp[v].add(u);
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfsSt(i, stack);
            }
        }

        long ans = 1, cost = 0;
        Map<Long, Long> mp = new HashMap<>();

        while (!stack.isEmpty()) {
            int x = stack.pop();
            if (!vis2[x]) {
                mini = INF;
                dfs(x, mp, a);

                cost += mini;
                ans = (ans * mp.get(mini)) % MOD;
                mp = new HashMap<>(); // create a new instance to avoid clearing
            }
        }

        pw.println(cost + " " + ans);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int t = 1;
        for (int i = 1; i <= t; i++) {
            solve(br, pw);
        }
        pw.flush();
    }
}





















// import java.util.*;

// class Graph {
//     private ArrayList<Integer>[] adj;
//     private ArrayList<Long> values;
//     private boolean[] visited;
//     private int n;

//     public Graph(int n) {
//         this.n = n;
//         values = new ArrayList<>(Collections.nCopies(n, 0L));
//         adj = new ArrayList[n];
//         for (int i = 0; i < n; i++) {
//             adj[i] = new ArrayList<>();
//         }
//         visited = new boolean[n];
//     }

//     public void addValue(int index, long x) {
//         values.set(index, x);
//     }

//     public void addEdge(int u, int v) {
//         adj[u].add(v);
//     }

//     private void getOrder(int u, boolean[] visited, Stack<Integer> stack) {
//         visited[u] = true;
//         for (int v : adj[u]) {
//             if (!visited[v]) {
//                 getOrder(v, visited, stack);
//             }
//         }
//         stack.push(u);
//     }

//     private Graph transpose() {
//         Graph g = new Graph(n);
//         for (int i = 0; i < n; i++) {
//             for (int j : adj[i]) {
//                 g.addEdge(j, i);
//             }
//         }
//         return g;
//     }

//     private long dfsUtil(int u, boolean[] visited, Map<Long, Long> map) {
//         visited[u] = true;
//         System.out.println(values.get(u));

//         long currentValue = values.get(u);
//         map.put(currentValue, map.getOrDefault(currentValue, 0L) + 1);
//         long mini = currentValue;
//         // System.out.print(mini + " ");

//         for (int v : adj[u]) {
//             if (!visited[v]) {
//                 mini = Math.min(mini, dfsUtil(v, visited, map));
//             }
//         }
//         return mini;
//     }

//     public void findSCC() {
//         Stack<Integer> stack = new Stack<>();
//         boolean[] visited = new boolean[n];

//         // Fill vertices in stack according to their finishing times
//         for (int i = 0; i < n; i++) {
//             if (!visited[i]) {
//                 getOrder(i, visited, stack);
//             }
//         }

//         // Transpose the graph
//         Graph g = transpose();
//         Arrays.fill(visited, false);

//         long mod = 1_000_000_007;
//         long cost = 0, answer = 1;

//         // Process all vertices in order defined by Stack
//         while (!stack.isEmpty()) {
//             int u = stack.pop();
//             System.out.print(u);
//             if (!visited[u]) {
//                 Map<Long, Long> map = new HashMap<>();
//                 long mini = g.dfsUtil(u, visited, map);

//                 System.out.print(": " + mini);

//                 // Ensure mini has a valid count in map
//                 Long count = map.get(mini);
//                 if (count != null) {
//                     cost += mini;
//                     answer = (answer * count) % mod;
//                 }
//             }
//             System.out.println();
//         }

//         System.out.println(cost + " " + answer);
//     }
// }

// public class C_Checkposts {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         Graph graph = new Graph(n);

//         for (int i = 0; i < n; i++) {
//             long value = sc.nextLong();
//             graph.addValue(i, value);
//         }

//         int e = sc.nextInt();
//         for (int i = 0; i < e; i++) {
//             int u = sc.nextInt() - 1;
//             int v = sc.nextInt() - 1;
//             graph.addEdge(u, v);
//         }

//         graph.findSCC();
//         sc.close();
//     }
// }
