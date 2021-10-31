def quicksort(A,l,r):
    if r-l <=1:
        return()
    yellow=l+1
    for green in range(l+1,r):
        if A[green]<=A[l]:
            (A[yellow],A[green])=(A(green),A[yellow])
            yellow=yellow+1
    (A[l],A[yellow-1])=(A[yellow-1],A[l])
    quicksort(A,l,yellow-1)
    quicksort(A,yellow,r)


import random
def randomize(l):
    for i in range(len(l)//2):
        j= random.randrange(0,len(l),1)
        k= random.randrange(0,len(l),1)
        (l[j],l[k])=(l[k],l[j])



