// accepted
// https://codeforces.com/contest/1976/problem/A

import java.util.*;

public class A_Verify_Password {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t > 0) {
            solve(sc);
            t--;
        }
    }

    static void solve(Scanner sc) {
        int n = sc.nextInt();
        String s = sc.next();

        for (int i = 0; i < n - 1; i++) {
            if (s.charAt(i) > s.charAt(i + 1)) {
                System.out.println("NO");
                return;
            }
        }

        System.out.println("YES");
    }
}