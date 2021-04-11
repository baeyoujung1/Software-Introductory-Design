a,b=input().split()
b=int(b)
c,d=input().split()
d=int(d)
e,f=input().split()
f=int(f)
g,h=input().split()
h=int(h)
i,j=input().split()
j=int(j)

score={a:b,c:d,e:f,g:h,i:j}

print("Which student's score?")
t=input()
if t in score:
    print(t+"'s score: "+str(score[t]))
else:
    print(t+" is not in the database.")
