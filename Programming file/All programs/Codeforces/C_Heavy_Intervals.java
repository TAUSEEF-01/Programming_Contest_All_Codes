// accepted
// https://codeforces.com/contest/1909/problem/C

import java.util.*;

public class C_Heavy_Intervals {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        long[][] a = new long[2 * n][2];
        long[] c = new long[n];

        for (int i = 0; i < n; i++) {
            a[i][0] = sc.nextLong();
            a[i][1] = 0;
        }

        for (int i = n; i < 2 * n; i++) {
            a[i][0] = sc.nextLong();
            a[i][1] = 1;
        }

        for (int i = 0; i < n; i++) {
            c[i] = sc.nextLong();
        }

        Arrays.sort(c);

        for (int i = 0; i < n / 2; i++) {
            long temp = c[i];
            c[i] = c[n - 1 - i];
            c[n - 1 - i] = temp;
        }

        Arrays.sort(a, Comparator.comparingLong(arr -> arr[0]));

        Stack<Long> stk = new Stack<>();
        Vector<Long> store = new Vector<>();

        for (int i = 0; i < 2 * n; i++) {
            long num_f = a[i][0], num_s = a[i][1];
            if (num_s == 0) {
                stk.push(num_f);
            } else {
                store.add(num_f - stk.peek());
                stk.pop();
            }
        }

        Collections.sort(store);

        Long ans = 0L;
        for (int i = 0; i < n; i++) {
            ans += store.elementAt(i) * c[i];
        }

        System.out.println(ans);
    }
}
