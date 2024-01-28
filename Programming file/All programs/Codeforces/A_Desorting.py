# accepted
# https://codeforces.com/contest/1853/problem/A

def solve():
    n = int(input())
    a = list(map(int,input().strip().split()))[:n]
    # a = list(map(int, input().split()))
    flag = 0
    emin = 1e10
    for i in range(1, n):
        if a[i-1] > a[i]:
            flag += 1
            break
        emin = min(emin, abs(a[i-1]-a[i]))

    if flag != 0:
        print(0)
    else:
        print(int(emin/2+1))

for _ in range(int(input())):
    solve()