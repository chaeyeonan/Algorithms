def solution(numbers, hand):
    answer = ''
    
    r_now=11
    l_now=10
    
    point=[[4,2],[1,1],[1,2],[1,3],[2,1],[2,2],[2,3],[3,1],[3,2],[3,3],[4,1],[4,3]]
    
    for num in numbers:
        if num==1 or num==4 or num==7:
            answer=answer+"L"
            l_now=num
        elif num==3 or num==6 or num==9:
            answer=answer+"R"
            r_now=num
        else:
            r_distance=abs(point[r_now][0]-point[num][0])+abs(point[r_now][1]-point[num][1])
            l_distance=abs(point[l_now][0]-point[num][0])+abs(point[l_now][1]-point[num][1])
            
            if r_distance>l_distance:
                answer=answer+"L"
                l_now=num
            elif r_distance<l_distance:
                answer=answer+"R"
                r_now=num
            else:
                if hand=="right":
                    answer=answer+"R"
                    r_now=num
                else:
                    answer=answer+"L"
                    l_now=num
    
    return answer