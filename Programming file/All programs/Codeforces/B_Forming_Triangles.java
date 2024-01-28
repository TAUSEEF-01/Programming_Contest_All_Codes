// accepted
// https://codeforces.com/contest/1922/problem/B

import java.util.*;

public class B_Forming_Triangles {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        TreeMap<Integer, Integer> treeMap = new TreeMap<>();

        for (int i = 0; i < n; i++) {
            Integer num;
            num = sc.nextInt();

            treeMap.put(num, treeMap.getOrDefault(num, 0) + 1);
        }

        long ans = 0;
        long cnt = 0;
        for (Map.Entry<Integer, Integer> ent : treeMap.entrySet()) {
            long val = ent.getValue();
            if (val >= 3) {
                ans += (val) * (val - 1) * (val - 2) / 6;
            }
            if (val >= 2) {
                ans += ((val) * (val - 1) / 2) * cnt;
            }
            cnt += val;
        }

        System.out.println(ans);
    }
}
