
def merge(a,b):
    m,n,c=len(a),len(b),[]
    i,j=0,0
    while i+j < m+n :
        if m==i :
            c.append(b[j])
            j=j+1
        elif n==j :
            c.append(a[i])
            i=i+1
        elif a[i]<=b[j] :
            c.append(a[i])
            i=i+1
        elif a[i]>b[j] :
            c.append(b[j])
            j=j+1  

    return(c)

def mergesort(A,left,right):
    if right-left <= 1:
        return(A[left:right])
    elif right-left>1:
        mid=(right+left)//2
        L=mergesort(A,left,mid)
        R=mergesort(A,mid,right)
        return(merge(L,R))

