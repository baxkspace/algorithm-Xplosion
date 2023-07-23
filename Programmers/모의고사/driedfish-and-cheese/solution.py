def solution(answers):
    answer = []
    man_1= [1,2,3,4,5]
    man_2= [2,1,2,3,2,4,2,5]
    man_3= [3,3,1,1,2,2,4,4,5,5]
    cnt1=0
    cnt2=0
    cnt3=0
    #repeat_1 = (len(answer)//len(man_1))+(len(answer) % len(man_1))
    for i in range(int(len(answers)//len(man_1))*len(man_1)+(len(answers) % len(man_1))):
        if(answers[i] == man_1[i%5]):
            cnt1 += 1
    for i in range(int(len(answers)//len(man_2))*len(man_2)+(len(answers) % len(man_2))):
        if(answers[i] == man_2[i%8]):
             cnt2 += 1
    for i in range(int(len(answers)//len(man_3))*len(man_3)+(len(answers) % len(man_3))):
        if(answers[i] == man_3[i%10]):
              cnt3 += 1
    temp = [cnt1,cnt2,cnt3]
    maximum = max(temp)
    if(cnt1 == maximum):
      answer.append(1)
    if(cnt2 == maximum):
      answer.append(2)
    if(cnt3 == maximum):
      answer.append(3)
    print(cnt1,cnt2,cnt3,answer)
    return answer
  
solution([1,2,3,4,5])