def solution(wallpaper):
    answer = []
    point=[]
    
    
    for i_index,i in enumerate(wallpaper):
        for j_index,j in enumerate(i):
            if j=="#":
                point.append([i_index,j_index])
    
    x_values = [p[1] for p in point] 
    y_values = [p[0] for p in point] 

    min_x = min(x_values)
    max_x = max(x_values)
    min_y = min(y_values)
    max_y = max(y_values)
    
    answer.append(min_y)
    answer.append(min_x)
    answer.append(max_y+1)
    answer.append(max_x+1)

            
    return answer