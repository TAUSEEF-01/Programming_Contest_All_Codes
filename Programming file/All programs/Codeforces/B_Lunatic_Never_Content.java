// accepted
// https://codeforces.com/contest/1826/problem/B

import java.util.*;

public class B_Lunatic_Never_Content {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static long gcd(long a, long b) {
        if (b == 0)
            return a;
        else
            return gcd(b, (a % b));
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        long[] a = new long[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }

        long ans = 0L;
        for (int i = 0; i < n / 2; i++) {
            ans = gcd(ans, Math.abs(a[i] - a[n - i - 1]));
        }

        System.out.println(ans);
    }
}
