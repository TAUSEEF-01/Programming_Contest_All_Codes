// accepted
// https://codeforces.com/problemset/problem/1909/B

import java.util.*;

public class B_Make_Almost_Equal_With_Mod {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        long[] a = new long[n];
        int o = 0, e = 0;
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
            if (a[i] % 2 == 0)
                e++;
            else
                o++;
        }

        if (o != 0 && e != 0) {
            System.out.println(2);
            return;
        }

        for (int i = 1; i < 56; i++) {
            Set<Long> st = new HashSet<Long>();
            for (int j = 0; j < n; j++) {
                st.add(a[j] % (1L << i));
            }
            if (st.size() == 2) {
                System.out.println(1L << i);
                return;
            }
        }

    }
}
