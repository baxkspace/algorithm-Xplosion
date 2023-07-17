n, k = map(int, input().split())

answer = 0
while bin(n).count('1') > k:
    n += 1
    answer += 1

print(answer)