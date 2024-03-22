// accepted
// https://codeforces.com/problemset/problem/1932/A

import java.util.*;

public class A_Thorns_and_Coins {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        String a = sc.next();

        int pos = n;
        for (int i = 0; i < n - 1; i++) {
            if (a.charAt(i) == '*' && a.charAt(i + 1) == '*') {
                pos = i;
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i < pos; i++) {
            if (a.charAt(i) == '@')
                ans++;
        }

        System.out.println(ans);
    }
}