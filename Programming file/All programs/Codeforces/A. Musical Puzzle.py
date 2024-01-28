# accepted
# https://codeforces.com/contest/1833/problem/A

def solve():
    n = int(input())
    a = input()
    st = set()
    for i in range(1, n):
        st.add(a[i-1]+a[i])
    print(len(st))

for _ in range(int(input())):
    solve()