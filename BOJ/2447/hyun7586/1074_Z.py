import sys
n, r, c=map(int, sys.stdin.readline().rstrip().split())
num=0

while n!=0:
    n-=1    
    x=2**n
    if r < x and c < x:
        pass

    elif r < x and c >= x:
        num+=x*x;   c=c-x
        
    elif r >= x and c < x:
        num+=2*x*x; r=r-x
        
    elif r >= x and c >= x:
        num+=3*x*x; r=r-x;  c=c-x

print(num)
