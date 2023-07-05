def solution(ingredient):
    num = 0
    idx = -1

    while idx <= len(ingredient)-5:
        idx += 1
        # print(ingredient, ingredient[idx:idx+4], idx, idx+4)
        if ingredient[idx:idx+4] == [1, 2, 3, 1]:
            num += 1
            del ingredient[idx:idx+4]
            idx -= 5
            if idx < 0:
                idx = -1

    return num
            