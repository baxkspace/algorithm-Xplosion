## Info
Programmers - 신고 결과 받기 https://school.programmers.co.kr/learn/courses/30/lessons/92334

## 
각 변수명과 기능은 코드에 주석을 달아 설명해 놨음.

1. parameter로 주어지는 report를 set으로 변환해서 중복 report를 제거함
2. member별로 reporter명을 저장하는 2차원 list : report_list를 주로 사용함.
3. 각 member별로 reporter 인원이 k명보다 크면 제재당함 -> answer에 반영.

## 2차원 list vs dictionary

dictionary 자료형은 key : value 쌍으로 구성하면 되므로 각 name 와 item  찾아가기가 편함.
근데 key 중복상황을 피해야 해서 고려하기 귀찮았음.

2차원 list는 member name가 몇번째 member인지 따져주는 과정을 항상 거쳐야 하지만, "report_list" 하나만으로
문제 풀어낼 수 있긴 함.