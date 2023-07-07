def solution(s):
    str_list = list(s)
    length = len(s)
    answer = 0

    while str_list:
        curr = 0
        other = 0
        for i in range(0, len(str_list)):
            if str_list[i] == str_list[0]:
                curr += 1
            else:
                other += 1
            if curr == other:
                idx = i
                break
            idx = i
        del str_list[0:idx+ 1]
        answer += 1

    return answer
