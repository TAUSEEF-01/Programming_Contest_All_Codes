import java.util.*;

public class C_Boring_Day {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            solve(sc);
        }
    }

    static void solve(Scanner sc) {
        int n = sc.nextInt(), l = sc.nextInt(), r = sc.nextInt();

        ArrayList<Long> a = new ArrayList<>(n);
        for (int i = 0; i < n; i++) {
            Long x = sc.nextLong();
            a.add(x);
        }

        long sum = 0;
        int L = 0, R = 0, ans = 0;

        while (L < n) {
            while (R < n && sum < l) {
                sum += a.get(R);
                R++;
            }
            if (sum >= l && sum <= r) {
                ans++;
                L = R;
                sum = 0;
            } else {
                sum -= a.get(L);
                L++;
            }
        }

        System.out.println(ans);
    }
}