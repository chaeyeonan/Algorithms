def solution(nums):
    answer = 0
    
    count=len(nums)/2
    new_nums=list(set(nums))
    
    if count<=len(new_nums):
        answer=count
    else:
        answer=len(new_nums)
    
    return answer