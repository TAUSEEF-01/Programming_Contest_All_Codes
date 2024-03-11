// accepted
// https://codeforces.com/contest/1931/problem/D

import java.util.*;

public class D_Divisible_Pairs {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        long x = sc.nextInt();
        long y = sc.nextInt();

        long v[] = new long[n];

        Map<Long, Map<Long, Long>> mp = new HashMap<>();
        long ans = 0;

        for (int i = 0; i < n; i++) {
            v[i] = sc.nextInt();

            long remainderx = v[i] % x;
            long remainderX = (x - v[i] % x) % x;
            long remainderY = v[i] % y;

            // Update ans by adding the value from the map
            ans += mp.getOrDefault(remainderX, new HashMap<>()).getOrDefault(remainderY, 0L);

            // Check if the outer map contains the key for remainderX
            if (!mp.containsKey(remainderX)) {
                mp.put(remainderX, new HashMap<>()); // If not, add a new inner map
            }

            if (!mp.containsKey(remainderx)) {
                mp.put(remainderx, new HashMap<>()); // If not, add a new inner map
            }

            Map<Long, Long> innerMap = mp.get(remainderx); // Get the inner map
            innerMap.put(remainderY, innerMap.getOrDefault(remainderY, 0L) + 1); // Increment value
        }

        System.out.println(ans);
    }
}
