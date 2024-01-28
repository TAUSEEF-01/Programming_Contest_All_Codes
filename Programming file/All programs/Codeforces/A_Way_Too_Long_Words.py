# accepted
# https://codeforces.com/problemset/problem/71/A

t = int(input())
while t>0:
    var = input()
    if len(var) <= 10:
        print(var)
    else:
        ans = var[0] + str(len(var)-2) + var[-1]
        print(ans)
    t-=1
