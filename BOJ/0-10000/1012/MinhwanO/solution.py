from collections import deque
t = int(input())

def bfs(graph, visited, x, y):
    queue = deque()
    queue.append((y,x))
    visited[y][x] = 1

    while queue:
        y, x = queue.popleft()
        if (x-1 > 0 and graph[y][x-1] == 1 and visited[y][x-1] != 1):
            visited[y][x-1] = 1
            queue.append((y,x-1))
        if (x+1 <= m and graph[y][x+1] == 1 and visited[y][x+1] != 1):
            visited[y][x+1] = 1
            queue.append((y,x+1))
        if (y-1 > 0 and graph[y-1][x] == 1 and visited[y-1][x] != 1):
            visited[y-1][x] = 1
            queue.append((y-1,x))
        if (y+1 <= n and graph[y+1][x] == 1 and visited[y+1][x] != 1):
            visited[y+1][x] = 1
            queue.append((y+1, x)) 

while(t):
    m, n, k = map(int, input().split())
    visited = [[0]*(m+2) for _ in range(n+2)]
    list = [[0] * (m+2) for _ in range(n+2)]
    count = 0
    for i in range(k):
        x, y = map(int, input().split())
        x2 = x+1
        y2 = y+1
        list[y2][x2] = 1
    for i in range(1,n+1):
        for j in range(1,m+1):
            if list[i][j] == 1 and visited[i][j] != 1:
                bfs(list, visited, j, i)
                count = count + 1

    print(count)
    t-=1