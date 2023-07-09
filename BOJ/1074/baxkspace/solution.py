n, c, r = map(int, input().split())
num_lst = [0, 2**n * 2**n - 1]
    
while n != 0:
    row = r // 2**(n-1)
    col = c // 2**(n-1)
    plus = 2**n*2**n // 4
    
    if row + col == 0:
        tmp = [num_lst[0], num_lst[0] + plus - 1]
    elif row == 1 and col == 0:
        tmp = [num_lst[0] + plus, num_lst[0] + plus*2 - 1]
        r -= 2**(n-1)
    elif row == 0 and col == 1:
        tmp = [num_lst[0] + plus*2, num_lst[1] - plus] 
        c -= 2**(n-1)
    else:
        tmp = [num_lst[1] - plus + 1, num_lst[1]]
        r -= 2**(n-1)
        c -= 2**(n-1)
        
    num_lst = tmp
    n -= 1

if r + c == 0:
    print(num_lst[0])
elif r == 1 and c == 0:
    print(num_lst[0] + 1)
elif c == 1 and r == 0:
    print(num_lst[1] - 1)
elif r + c == 2:
    print(num_lst[1])
elif n == 1:
    print("0")