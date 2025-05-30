from collections import Counter

def solution(survey, choices):
    answer = ''
    
    type_arr=['R','T','C','F','J','M','A','N']
    
    for index,i in enumerate(survey):
        if choices[index]==1:
            answer+=i[0]*3
        elif choices[index]==2:
            answer=answer+i[0]*2
        elif choices[index]==3:
            answer=answer+i[0]
        elif choices[index]==5:
            answer=answer+i[1]
        elif choices[index]==6:
            answer=answer+i[1]*2
        elif choices[index]==7:
            answer=answer+i[1]*3
      
    real_answer=''
    if Counter(answer)['R'] >= Counter(answer)['T']:
        real_answer+='R'
    else:
        real_answer+='T'
    
    if Counter(answer)['C'] >= Counter(answer)['F']:
        real_answer+='C'
    else:
        real_answer+='F'
    
    if Counter(answer)['J'] >= Counter(answer)['M']:
        real_answer+='J'
    else:
        real_answer+='M'
    
    if Counter(answer)['A'] >= Counter(answer)['N']:
        real_answer+='A'
    else:
        real_answer+='N'
        
    return real_answer