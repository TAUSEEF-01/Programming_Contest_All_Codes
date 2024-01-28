import java.util.*;

public class C_Partitioning_the_Array {
    static int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, (a % b));
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t > 0) {
            t--;

            int n = sc.nextInt();
            int[] a = new int[n];

            int ans = 0;

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            for (int i = 1; i <= n; i++) {
                if (n % i == 0) {
                    int GCD = 0;
                    for (int j = 0; j + i < n; j++) {
                        GCD = gcd(GCD, Math.abs(a[j + i] - a[j]));
                    }
                    if (GCD != 1)
                        ans++;
                }
            }

            System.out.println(ans);
        }
    }
}
