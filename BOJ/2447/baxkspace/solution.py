def solution(n):
    if n == 3:
        temp = ['***', '* *', '***']
        return temp # 가장 작은 패턴
    before = solution(n//3) # 이전 숫자의 패턴 저장

    temp = []
    for item in before:
        temp.append(item * 3) # 전체 세 개로 나누었을 때 첫째 줄 - 이전 패턴 세 번 반복
    for item in before:
        temp.append(item + ' ' * (n//3) + item) # 둘째 줄 - 이전 패턴 한 번, 빈 칸, 이전 패턴
    for item in before:
        temp.append(item * 3) # 첫째 줄과 동일
    
    return temp # 이때까지 저장된 패턴 반환, 다음 시행이 있을 시 before에 들어감

n = int(input())
print(*solution(n), sep='\n') # 리스트 출력 시 * 붙이면 리스트 형식 벗겨져서 출력