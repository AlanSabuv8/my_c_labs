def listdif(c,d):
    m,n,e=len(c),len(d),[]
    i,j=0,0
    while i<m or j<n :
        if c[i]==d[j]:
            i=i+1
            j=j+1
        elif c[i]<d[j]:
            e.append(c[i])
            i=i+1
        elif c[i]>d[j]:
            e.append(d[j])
            j=j+1
    return(e)      


