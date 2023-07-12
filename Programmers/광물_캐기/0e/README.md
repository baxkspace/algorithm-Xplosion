## Info

Programmers - 광물캐기 https://school.programmers.co.kr/learn/courses/30/lessons/172927

## How to solve

tmp에 다이아,철,돌곡괭이로 캤을때 각각의 피로도 체크
한 곡괭이로 최대 5번 캘 수 있음 : cnt%5==0이거나 5개를 채우지 못하고 for문이 끝났을때 HP에 append
곡괭이를 다 쓰면 피로도 체크하는게 의미가없기 때문에 cnt//5==곡괭이전체수 -> break

돌곡으로캔피로도가제일높은것부터 좋은곡괭이로캐는게낫다고판단함
그래서sort해줌 다이아곡괭이 없으면철곡...철곡없으면돌곡....
완성!!

## etc

마크하면서풀음
