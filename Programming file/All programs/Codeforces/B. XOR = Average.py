# accepted
# https://codeforces.com/problemset/problem/1758/B

def solve():
    n = int(input())
    # print(*[1] if n == 1 else [1 + n % 2] + [2]*(n-2) + [3 - n % 2]) # --> correct ans in one line
    if n&1:
        while n>0:
            print(1, end=' ')
            n -= 1
    else:
        print('1 3', end=' ')
        n -= 2
        while n>0:
            print(2, end=' ')
            n -= 1
    print()

for _ in range(int(input())):
    solve()