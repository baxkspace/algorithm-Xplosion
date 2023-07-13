import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def count_person(lines, x_pos, y_pos):
    global cnt
    if visit[y_pos][x_pos]:
        return
    visit[y_pos][x_pos] = True

    for i in range(4):
        xpos, ypos = (x_pos + dx_dy[0][i], y_pos + dx_dy[1][i])
        if 0<=xpos<C and 0<=ypos<R :
            if lines[ypos][xpos] != 'X' and not visit[ypos][xpos]:
                if lines[ypos][xpos]== 'P':
                    cnt+=1
                count_person(lines, xpos, ypos)
					
R,C = map(int, input().split())
lines=[]
for i in range(R):
    lines.append(list(input()))
    if 'I' in lines[i]:
        I_r,I_c=i,lines[i].index('I')
cnt=0
visit = [[False] * C for _ in range(R)]
dx_dy = [[-1,0,0,1], [0,1,-1,0]]

count_person(lines, I_c,I_r)
if cnt>0:
    print(cnt)
else:
    print("TT")