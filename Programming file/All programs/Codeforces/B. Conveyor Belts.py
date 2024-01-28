# accepted
# https://codeforces.com/contest/1811/problem/B

for _ in range(int(input())):
    n, x1, y1, x2, y2= map(int,input().split())
    a= min(x1, n-x1+1, y1, n-y1+1)
    b= min(x2, n-x2+1, y2, n-y2+1)
    print(abs(a-b))