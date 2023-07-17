## Info

Programmers - 괄호 변환 https://school.programmers.co.kr/learn/courses/30/lessons/60058

## How to solve

check 함수: stack으로u가올바른괄호문자열인지검사

(랑 )의 개수가 같을때 u와v가쪼개짐
if p[:i].count('(')==p[:i].count(')') : u,v=p[:i],p[i:]

check가 True면 u에 v를 재귀실행하여 더한것을 return
등등... 프로그래머스 설명을 따라가면됩니다

## etc

휴대폰으로코딩하다가4번날린썰푼다
