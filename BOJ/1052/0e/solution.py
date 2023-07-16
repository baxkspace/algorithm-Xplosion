N, K = map(int, input().split())

answer=0
bin_len=len(bin(N))

while True:
    binary = bin(N)
    if binary.count("1")<=K:
        print(answer)
        break

    for i in range(bin_len-1,2,-1):
        if(binary[i]=='1'):
            N+=2**(bin_len-i-1)
            answer+=2**(bin_len-i-1)
            break
