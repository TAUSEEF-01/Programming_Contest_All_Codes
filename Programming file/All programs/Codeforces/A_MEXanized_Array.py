# accepted
# https://codeforces.com/problemset/problem/1870/A

for i in range(int(input())): 
    n, k, x= map(int,input().split())

    if (n < k) or (x < (k-1)):
        print(-1)
        continue
    else:
        ans = int(0)
        for j in range(k):
            ans += j
            n -= 1
        while n>0:
            if x!=k: 
                ans += max(k-1, x)
            else:
                ans += max(k-1, x-1)
            n -= 1
        print(ans)
            