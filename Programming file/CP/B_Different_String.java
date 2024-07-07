// accepted
// https://codeforces.com/contest/1971/problem/B

import java.util.*;

public class B_Different_String {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        String s = sc.next();
        int n = s.length();

        Set<Character> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            set.add(s.charAt(i));
        }

        if (set.size() == 1) {
            System.out.println("NO");
            return;
        } else {
            System.out.println("YES");
            for (int i = 0; i < n - 1; i++) {
                if (s.charAt(i) != s.charAt(i + 1)) {
                    s = swap(s, i, i + 1);
                    i++;
                }
            }
            System.out.println(s);
        }
    }

    // swapping two characters of a string 
    public static String swap(String s, int i, int j) {
        StringBuilder sb = new StringBuilder(s);
        char temp = sb.charAt(i);
        sb.setCharAt(i, sb.charAt(j));
        sb.setCharAt(j, temp);
        return sb.toString();
    }
}