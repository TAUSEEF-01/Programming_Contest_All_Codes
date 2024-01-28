// accepted
// https://codeforces.com/contest/1919/problem/A

import java.util.*;

public class A_Wallet_Exchange {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t > 0) {
            t--;

            int a = sc.nextInt(), b = sc.nextInt();
            if ((a + b) % 2 == 1)
                System.out.println("Alice");
            else
                System.out.println("Bob");
        }
    }
}