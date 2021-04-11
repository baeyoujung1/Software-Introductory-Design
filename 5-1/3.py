a=input().split()
c={}
for i in a:
    if i not in c :
        c[i]=1
    else:
        c[i]=c[i]+1

for i in c:
    print(i+': '+str(c[i]))
