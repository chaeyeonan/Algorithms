def solution(new_id):
    replace_arr=[]
    new_id1=''
    
    new_id=new_id.lower()
    
    for i in new_id:
        if i.islower()==True or i.isdigit()==True or i=="-" or i=="_" or i==".":
            continue
        else:
            replace_arr.append(i)
    
    for i in replace_arr:
        new_id=new_id.replace(i,"")
    replace_arr=[]
    
    for index,i in enumerate(new_id):
        if i=="." and index!=len(new_id)-1:
            count=1
            while index+count!=len(new_id) and new_id[index+count]==".":
                replace_arr.append(index+count)
                count=count+1
                
    replace_arr=list(set(replace_arr))
    
    for index,i in enumerate(new_id):
        if index not in replace_arr:
            new_id1+=i
    replace_arr=[]
    
    if new_id1[0]==".":
        new_id1=new_id1[1:]
    if len(new_id1)>=1 and new_id1[len(new_id1)-1]==".":
        new_id1=new_id1[:-1]
    
    if len(new_id1)==0:
        new_id1=new_id1+"a"
    
    if len(new_id1)>=16:
        num=len(new_id1)-15
        new_id1=new_id1[:-num]
        if len(new_id1)>=1 and new_id1[len(new_id1)-1]==".":
            new_id1=new_id1[:-1]
    
    if len(new_id1)<=2:
        last=new_id1[len(new_id1)-1]
        while len(new_id1)!=3:
            new_id1+=last
            
    return new_id1