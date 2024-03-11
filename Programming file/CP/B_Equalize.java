// accepted
// https://codeforces.com/contest/1928/problem/B

import java.util.*;
import javax.print.FlavorException;
import javax.swing.text.AbstractDocument.Content;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class B_Equalize {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            solve(sc);
        }
    }

    static void solve(Scanner sc) {
        int n = sc.nextInt();
        Vector<Integer> a = new Vector<>();
        Set<Integer> st = new HashSet<Integer>();

        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            st.add(num);
        }

        for (var num : st) {
            a.add(num);
        }

        Collections.sort(a);

        int sz = a.size();
        int ans = 1, l = 0, r = 1;
        while (r < sz) {
            if ((((a.elementAt(r) + 1) - (a.elementAt(l) + n)) <= 0) && ((a.elementAt(r) - a.elementAt(l)) > 0)) {
                ans = Math.max(ans, r - l + 1);
                r++;
            } else {
                l++;
                if (r <= l) {
                    r = l + 1;
                }
            }
        }

        ans = Math.max(ans, r - l);

        System.out.println(ans);
    }
}

/*
 * 2d Array sorting in java:
 * Arrays.sort(myArr, (a, b) -> a[0] - b[0]);
 * 
 * Arrays.sort(contests, (a, b) -> Integer.compare(b[0],a[0])); //decreasing
 * order
 * Arrays.sort(contests, (a, b) -> Integer.compare(a[0],b[0]); //increasing
 * order
 */




// static void solve(Scanner sc) {
// int[][] a = new int[4][2];
// for (int i = 0; i < 4; i++) {
// a[i][0] = sc.nextInt();
// a[i][1] = sc.nextInt();
// }

// Arrays.sort(a, (x, y) -> x[0] - y[0]);

// int ans = (a[0][1] - a[1][1]) * (a[0][1] - a[1][1]);

// System.out.println(ans);
// }

// Arrays.sort(a);
// Arrays.sort(b);

// public static void solve(Scanner sc) {
// int n = sc.nextInt();

// TreeMap<Integer, Integer> treeMap = new TreeMap<>();

// for (int i = 0; i < n; i++) {
// Integer num;
// num = sc.nextInt();

// treeMap.put(num, treeMap.getOrDefault(num, 0) + 1);
// }

// long ans = 0;
// long cnt = 0;
// for (Map.Entry<Integer, Integer> ent : treeMap.entrySet()) {
// long val = ent.getValue();
// if (val >= 3) {
// ans += (val) * (val - 1) * (val - 2) / 6;
// }
// if (val >= 2) {
// ans += ((val) * (val - 1) / 2) * cnt;
// }
// cnt += val;
// }

// System.out.println(ans);
// }





// public static void solve(Scanner sc) {
// int n = sc.nextInt();

// long[] a = new long[n];
// int o = 0, e = 0;
// for (int i = 0; i < n; i++) {
// a[i] = sc.nextLong();
// if (a[i] % 2 == 0)
// e++;
// else
// o++;
// }

// if (o != 0 && e != 0) {
// System.out.println(2);
// return;
// }

// for (int i = 1; i < 56; i++) {
// Set<Long> st = new HashSet<Long>();
// for (int j = 0; j < n; j++) {
// st.add(a[j] % (1L << i));
// }
// if (st.size() == 2) {
// System.out.println(1L << i);
// return;
// }
// }

// }






// public static void solve(Scanner sc) {
// int n = sc.nextInt();

// long[][] a = new long[2 * n][2];
// long[] c = new long[n];

// for (int i = 0; i < n; i++) {
// a[i][0] = sc.nextLong();
// a[i][1] = 0;
// }

// for (int i = n; i < 2 * n; i++) {
// a[i][0] = sc.nextLong();
// a[i][1] = 1;
// }

// for (int i = 0; i < n; i++) {
// c[i] = sc.nextLong();
// }

// Arrays.sort(c);

// for (int i = 0; i < n / 2; i++) {
// long temp = c[i];
// c[i] = c[n - 1 - i];
// c[n - 1 - i] = temp;
// }

// Arrays.sort(a, Comparator.comparingLong(arr -> arr[0]));

// Stack<Long> stk = new Stack<>();
// Vector<Long> store = new Vector<>();

// for (int i = 0; i < 2 * n; i++) {
// long num_f = a[i][0], num_s = a[i][1];
// if (num_s == 0) {
// stk.push(num_f);
// } else {
// store.add(num_f - stk.peek());
// stk.pop();
// }
// }

// Collections.sort(store);

// Long ans = 0L;
// for (int i = 0; i < n; i++) {
// ans += store.elementAt(i) * c[i];
// }

// System.out.println(ans);
// }






// public static void solve(Scanner sc) {
// int n = sc.nextInt();
// long x = sc.nextInt();
// long y = sc.nextInt();

// long v[] = new long[n];

// Map<Long, Map<Long, Long>> mp = new HashMap<>();
// long ans = 0;

// for (int i = 0; i < n; i++) {
// v[i] = sc.nextInt();

// long remainderx = v[i] % x;
// long remainderX = (x - v[i] % x) % x;
// long remainderY = v[i] % y;

// // Update ans by adding the value from the map
// ans += mp.getOrDefault(remainderX, new HashMap<>()).getOrDefault(remainderY,
// 0L);

// // Check if the outer map contains the key for remainderX
// if (!mp.containsKey(remainderX)) {
// mp.put(remainderX, new HashMap<>()); // If not, add a new inner map
// }

// if (!mp.containsKey(remainderx)) {
// mp.put(remainderx, new HashMap<>()); // If not, add a new inner map
// }

// Map<Long, Long> innerMap = mp.get(remainderx); // Get the inner map
// innerMap.put(remainderY, innerMap.getOrDefault(remainderY, 0L) + 1); //
// Increment value
// }

// System.out.println(ans);
// }






// public static int dfs(int i, int j) {
// // vis[i][j] = true;
// // int sum = adj[i][j];

// // for (int k = 0; k < 4; k++) {
// // int _dx = i + dx[k];
// // int _dy = j + dy[k];

// // if (_dx >= 0 && _dx < n && _dy >= 0 && _dy < m && vis[_dx][_dy] == false
// &&
// // adj[_dx][_dy] != 0) {
// // sum += dfs(_dx, _dy);
// // }
// // }

// // return sum;

// int sum = 0;
// Stack<int[]> stack = new Stack<>();
// stack.push(new int[] { i, j });

// while (!stack.isEmpty()) {
// int[] current = stack.pop();
// int x = current[0];
// int y = current[1];

// if (adj[x][y] == 0 || !vis[x][y]) {
// continue;
// }

// sum += adj[x][y];
// vis[x][y] = false;

// for (int k = 0; k < 4; k++) {
// int ii = x + dx[k];
// int jj = y + dy[k];
// if (ii >= 0 && ii < n && jj >= 0 && jj < m && vis[ii][jj]) {
// stack.push(new int[] { ii, jj });
// }
// }
// }
// return sum;
// }