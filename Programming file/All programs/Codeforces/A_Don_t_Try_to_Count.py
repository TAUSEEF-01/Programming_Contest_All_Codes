# accepted
# https://codeforces.com/contest/1881/problem/A

for _ in range(int(input())):
    n, m = map(int,input().split())
    x= input()
    s= input()
    
    ans = -1
    for i in range(10):
        if(s in x):
            ans = i
            break
        x += x
        i += 1
        
    print(ans)