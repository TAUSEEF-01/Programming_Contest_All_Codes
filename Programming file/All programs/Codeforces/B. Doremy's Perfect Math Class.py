# accepted
# https://codeforces.com/contest/1764/problem/B

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    p=a[0]
    for i in range(n):
        p=gcd(a[i], p)
    print(int(a[n-1]/p))

for _ in range(int(input())):
    solve()
