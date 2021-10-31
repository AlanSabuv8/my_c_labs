def select(ls):
    if ls==[]:
        return(ls)
    for start in range(len(ls)):
        min=start
        for i in range(start,len(ls)):
            if  ls[min]>ls[i]:
                min=i
        (ls[start],ls[min])=(ls[min],ls[start]) 

    return(ls)    
