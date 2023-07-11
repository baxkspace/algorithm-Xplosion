def solution(name):
    length = len(name)
    answer = 0
    cursor = length - 1

#     while name[cursor] == 'A' and cursor > 0:
#         cursor -= 1

#     if cursor < 0:
#         return answer

    for i in range(length):
        answer += min(ord('Z') - ord(name[i]) + 1, ord(name[i]) - ord('A'))

        curr = i + 1
        while curr < length and name[curr] == 'A':
            curr += 1

        cursor = min([cursor, i*2 + length - curr, i + 2 * (length - curr)])

    answer += cursor
    return answer