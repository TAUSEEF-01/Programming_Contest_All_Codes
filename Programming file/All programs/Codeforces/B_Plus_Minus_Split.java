// accepted
// https://codeforces.com/contest/1919/problem/B

import java.util.Scanner;

public class B_Plus_Minus_Split {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            String a = sc.next();

            int m = 0, p = 0;
            for (int j = 0; j < n; j++) {
                if (a.charAt(j) == '-')
                    m++;
                else
                    p++;
            }
            System.out.println(Math.abs(m - p));
        }
    }
}
