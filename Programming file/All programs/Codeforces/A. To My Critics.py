# accepted
# https://codeforces.com/problemset/problem/1850/A

def solve():
    x = list(map(int,input().strip().split()))[:3]
    x.sort()
    if x[1]+x[2] >= 10:
        print("YES")
    else:
        print("NO")

for _ in range(int(input())):
    solve()