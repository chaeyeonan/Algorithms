from collections import Counter

def solution(participant, completion):
    
    p_count=Counter(participant)
    c_count=Counter(completion)
    
    for i in participant:
        if p_count[i]==c_count[i]+1:
            return i