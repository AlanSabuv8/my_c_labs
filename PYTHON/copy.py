def cubefree(n):
  if n<16:
    return(True)
  else:
    for i in range(2,int(n/2)):
      if n%(i*i*i)==0:
        return(False)
      else:
        return(True)
