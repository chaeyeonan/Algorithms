def solution(players, callings):
    players_dict={}
    
    for idx,i in enumerate(players):
        players_dict[i]=idx
    
    for i in callings:
        index=players_dict[i]
        players[index], players[index-1] = players[index-1], players[index]
        players_dict[players[index]]=index
        players_dict[players[index-1]]=index-1
        
    return players