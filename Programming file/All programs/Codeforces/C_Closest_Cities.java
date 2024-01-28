// accepted
// https://codeforces.com/contest/1922/problem/C

import java.util.*;

public class C_Closest_Cities {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        long[] a = new long[n + 1];
        long[] pref = new long[n + 1];
        long[] suf = new long[n + 1];

        for (int i = 1; i <= n; i++) {
            a[i] = sc.nextLong();
        }

        for (int i = 1; i < n; i++) {
            if (i == 1) {
                pref[i] = 1;
                continue;
            }
            if (a[i] - a[i - 1] > a[i + 1] - a[i]) {
                pref[i] = pref[i - 1] + 1;
            } else {
                pref[i] = (a[i + 1] - a[i]) + pref[i - 1];
            }
        }

        for (int i = n; i > 1; i--) {
            if (i == n) {
                suf[i - 1] = 1;
                continue;
            }
            if (a[i + 1] - a[i] > a[i] - a[i - 1]) {
                suf[i - 1] = suf[i] + 1;
            } else {
                suf[i - 1] = (a[i] - a[i - 1]) + suf[i];
            }
        }

        int m = sc.nextInt();

        while (m > 0) {
            m--;
            int x = sc.nextInt(), y = sc.nextInt();

            if (y > x)
                System.out.println(pref[y - 1] - pref[x - 1]);
            else
                System.out.println(suf[y] - suf[x]);
        }

    }
}
