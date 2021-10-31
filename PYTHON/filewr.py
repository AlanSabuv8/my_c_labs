fp=open("test.py", "r")
contents=fp.readlines()
for l in contents:
    s=l.rstrip()
    print(s)
op=open("copy.py", "w+")
op.writelines(contents)
fp.close()
op.close()