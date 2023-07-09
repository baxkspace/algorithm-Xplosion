n, r, c = map(int, input().split())

size = 2**n
sum = 0

def z(n1, n2, m1, m2):
    global sum
    if n2-n1 == 1:
        if c == n2 and r == m1:
            sum += 1
        elif c == n1 and r == m2:
            sum += 2
        elif c == n2 and r == m2:
            sum += 3
        return
    
    plus = ((n2-n1+1)//2)*((n2-n1+1)//2)
    if c <= (n1+n2)//2 and r <= (m1+m2)//2:
        z(n1, (n1+n2)//2, m1, (m1+m2)//2)
    if c > (n1+n2)//2 and r <= (m1+m2)//2:
        sum += plus
        z((n1+n2)//2+1, n2, m1, (m1+m2)//2)
    if c <= (n1+n2)//2 and r > (m1+m2)//2:
        sum += plus*2
        z(n1, (n1+n2)//2, (m1+m2)//2+1, m2)
    if c > (n1+n2)//2 and r > (m1+m2)//2:
        sum += plus*3
        z((n1+n2)//2+1, n2, (m1+m2)//2+1, m2)

z(0, size-1, 0, size-1)
print(sum)