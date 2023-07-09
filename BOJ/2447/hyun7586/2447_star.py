import sys
n=int(sys.stdin.readline())

lst=[[' ' for _ in range(n)] for __ in range(n)]

def func(n, i, j):
    if n==3:
        lst[i][j]='*';      lst[i][j+1]='*';    lst[i][j+2]='*'
        lst[i+1][j]='*';    lst[i+1][j+1]=' ';  lst[i+1][j+2]='*'
        lst[i+2][j]='*';    lst[i+2][j+1]='*';  lst[i+2][j+2]='*'
    else:
        x=n//3
        func(x, i, j);       func(x, i, j+x);        func(x, i, j+2*x)
        func(x, i+x, j);                             func(x, i+x, j+2*x)
        func(x, i+2*x, j);   func(x, i+2*x, j+x);    func(x, i+2*x, j+2*x)

func(n, 0, 0)

for i in range(n):
    for j in range(n):
        print(lst[i][j], end="")
    print("")
