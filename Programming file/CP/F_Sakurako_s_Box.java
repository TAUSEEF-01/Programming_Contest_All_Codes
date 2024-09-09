// accepted

import java.util.*;

public class F_Sakurako_s_Box {
    public static long mod = 1000000007;

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        long a[] = new long[n];
        long pref[] = new long[n + 1];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }

        pref[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            pref[i] = (pref[i + 1] + a[i]) % mod;
        }

        long nn = n;
        long ans = 0, cnt = (nn * (nn - 1) / 2) % mod;

        for (int i = 0; i < n - 1; i++) {
            ans = (ans + (pref[i + 1] * a[i]) % mod) % mod;
        }

        cnt = binExpo(cnt, mod - 2);

        ans = (ans * cnt) % mod;
        System.out.println(ans);
    }

    public static long binExpo(long a, long b) {
        long ans = 1;
        while (b > 0) {
            if (b % 2 == 1) {
                ans = (ans * a) % mod;
            }
            a = (a * a) % mod;
            b /= 2;
        }

        return ans;
    }
}