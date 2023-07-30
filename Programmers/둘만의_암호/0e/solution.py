def solution(s, skip, index):
    answer = ''
    for i in s:
        ch = ord(i)
        INDEX=index
        while INDEX > 0:
            ch += 1
            if ch > ord('z'): ch = ord('a')
            if chr(ch) in skip: INDEX += 1
            INDEX -= 1
        answer += chr(ch)
    return answer