def solution(number, limit, power):
    answer=0
    power_of_numbers=[]
    # store power of each numbers

    for i in range(1, number+1):
        divisor=[]
        # store divisors of each numbers

        j=1
        while j<i**(1/2)+1:
            if i%j==0:
                divisor.append(j)
            j+=1
        
        
        for div_temp in divisor:
            another_divisors=i/div_temp
            if another_divisors not in divisor:
                divisor.append(another_divisors)
        
        power_of_numbers.append(len(divisor))
        
    for i in power_of_numbers:
        if i>limit:
            answer+=power
        else:
            answer+=i
        
    return answer