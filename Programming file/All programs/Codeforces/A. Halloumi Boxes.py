# accepted
# https://codeforces.com/contest/1903/problem/A

def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = sorted(a)
    if k>1 or b == a:
        print("YES")
    else:
        print("NO")
    

for _ in range(int(input())):
    solve()
