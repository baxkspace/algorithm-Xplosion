import sys
sys.setrecursionlimit(10**6)
# https://help.acmicpc.net/judge/rte/RecursionError

n, m = map(int, input().split())
board = []
for i in range(n):
    col = list(input().rstrip())
    for j in range(len(col)):
        if col[j] == 'I':
            pos_x = i
            pos_y = j
    board.append(col)

def dfs(x, y):
    global answer
    if x < 0 or y < 0 or x > n - 1 or y > m - 1:
        return
    
    workable = ['I', 'O', 'P']
    if board[x][y] in workable:
        if board[x][y] == 'P':
            answer += 1
        board[x][y] = -1
        dfs(x + 1, y)
        dfs(x, y + 1)
        dfs(x - 1, y)
        dfs(x, y - 1)

answer = 0
dfs(pos_x, pos_y)
if answer == 0:
    answer = 'TT'
print(answer)