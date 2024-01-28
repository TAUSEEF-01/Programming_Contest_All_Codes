// accepted
// https://codeforces.com/contest/1826/problem/C

import java.util.*;

public class C_Dreaming_of_Freedom {
    public static boolean[] prime = new boolean[1000100];
    public static int[] lp = new int[1000100];

    public static void main(String args[]) {
        isPrime();

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static void isPrime() {
        prime[0] = prime[1] = true;
        for (int i = 2; i < 1000100; i++) {
            if (!prime[i]) {
                lp[i] = i;
                for (int j = i * 2; j < 1000100; j += i) {
                    prime[j] = true;
                    if (lp[j] == 0) {
                        lp[j] = i;
                    }
                }
            }
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        int m = sc.nextInt();

        if ((n == 1) || (lp[n] > m)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
