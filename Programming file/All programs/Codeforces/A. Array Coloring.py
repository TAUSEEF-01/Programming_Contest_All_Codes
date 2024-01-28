# accepted
# https://codeforces.com/contest/1857/problem/A

for _ in range(int(input())):
    n = int(input())
    x = list(map(int,input().strip().split()))[:n]
    ans = sum(x)

    if (ans % 2) == 0:
        print("YES")
    else:
        print("NO")
