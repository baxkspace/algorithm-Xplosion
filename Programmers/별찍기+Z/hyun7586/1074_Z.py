import sys
n, r, c=map(int, sys.stdin.readline().rstrip().split())

lst=[[' ' for _ in range(2**n)] for __ in range(2**n)]
num=0

def func(m, i, j):
    global num
    if m==2:
        lst[i][j]=num;     num+=1
        lst[i][j+1]=num;   num+=1   
        lst[i+1][j]=num;   num+=1
        lst[i+1][j+1]=num; num+=1
    else:
        x=m//2
        func(x, i, j);     func(x, i, j+x)
        func(x, i+x, j);   func(x, i+x, j+x)

func(2**n, 0, 0)

print(lst[r][c])
