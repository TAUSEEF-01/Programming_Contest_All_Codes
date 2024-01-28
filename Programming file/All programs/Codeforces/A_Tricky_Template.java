// accepted
// https://codeforces.com/contest/1922/problem/A

import java.util.*;

public class A_Tricky_Template {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        String a = sc.next();
        String b = sc.next();
        String c = sc.next();

        if (a == c || b == c) {
            System.out.println("NO");
        } else {
            int flag = 0;
            for (int i = 0; i < n; i++) {
                if (a.charAt(i) != c.charAt(i) && b.charAt(i) != c.charAt(i)) {
                    flag++;
                    break;
                }
            }

            if (flag != 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
