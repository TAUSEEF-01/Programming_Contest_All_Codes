// accepted
// https://codeforces.com/contest/1850/problem/F

import java.util.*;

public class F_We_Were_Both_Children {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            solve(sc);
        }
    }

    public static void solve(Scanner sc) {
        int n = sc.nextInt();

        int arr[] = new int[n];
        TreeMap<Integer, Integer> mp = new TreeMap<>();

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();

            if (arr[i] <= n)
                mp.put(arr[i], mp.getOrDefault(arr[i], 0) + 1);
        }

        int mx = 0;
        TreeMap<Integer, Integer> ans = new TreeMap<>();
        for (Map.Entry<Integer, Integer> ent : mp.entrySet()) {
            int num = ent.getValue();
            int base = ent.getKey();

            for (int i = base; i <= n; i += base) {
                ans.put(i, ans.getOrDefault(i, 0) + num);
                mx = Math.max(mx, ans.getOrDefault(i, 0));
            }
        }

        System.out.println(mx);
    }

}



// int mx = 0;
// TreeMap<Integer, Integer> ans = new TreeMap<>();
// for (Map.Entry<Integer, Integer> ent : mp.entrySet()) {
//     int num = ent.getValue();
//     int base = ent.getKey();

//     for (int i = base; i <= n; i += base) {
//         ans.put(i, ans.getOrDefault(i, 0) + num);
//         mx = Math.max(mx, ans.getOrDefault(i, 0));
//     }
// }