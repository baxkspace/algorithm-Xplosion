## Info

Programmers - 시소짝꿍 https://school.programmers.co.kr/learn/courses/30/lessons/152996

## How to solve
weight_dic의 key는 몸무게, value는 몸무게가 나온 횟수
짝꿍이 만들어지는 조건은 몸무게가 1:1,1:2,2:3,3:4인 4개의 경우가 존재
>> 1:1 검사
    value가 1보다 크면 [value C(조합) 2]를 answer에 더해줌
>> 1:2,2:3,3:4검사
    딕셔너리를 sort하면 튜플의 형태로 나옴
    tmp의 2배,3/2배,4/3배의값이weights에있는지확인
    존재한다면 (tmp의value * 배수값의value)를 answer에 더해줌

## etc
딕셔너리안쓰고풀다가
너무화나서........
딕셔너리쓰니까단숨에성공해버렷습니다...