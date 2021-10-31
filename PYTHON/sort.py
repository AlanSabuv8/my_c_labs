def binarysearch(ls,v,l,r):
    
    if r-l==0:
        return(False)
    m=(r+l)//2    
    if ls[m]==v:
        return(True)
    elif v<ls[m]:
        return(binarysearch(ls,v,l,m))
    else:
        return(binarysearch(ls,v,m+1,r))


