a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
if a>b:
    d=a
    e=b
else :
    d=b
    e=a
if c>d:
    m=c
else :
    m=d
if c<e:
    n=c
else :
    n=e
print("min: "+str(n))
print("max: "+str(m))
