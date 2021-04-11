import random
ls=[]
leng=int(input())
a=''

def getRandomString(leng):
    for i in range(1,leng+1) :
        global a
        a=chr(random.randint(97,122))
        global ls
        ls.append(str(a))
    return (''.join(ls))

def rran():
    n=chr(random.randint(97,122))
    while n in lss:
        n=chr(random.randint(97,122))
    return n



guess=chr(random.randint(97,122))
guesss=guess
lss=[guesss]
c=getRandomString(leng)
c1=c



def disp():
    global c
    blanks='_'
    for i in range(len(c)):
        if c[i] in guesss:
            c=c[:i]+blanks+c[i+1:]
    return c

def dispp():
    global c
    blanks='_'
    for i in range(len(c)):
        if c[i] in x:
            c=c[:i]+blanks+c[i+1:]
    return c

    
def scp():
    lss.append(x)
    return (' '.join(lss))

print('Input the length of the string : '+str(leng))
print('Generated Cheese is ' +'\''+ c+'\'')
print('Mouse starts eating!!')
print("Start eating "+'\''+guesss+'\'')
print('Eaten alphabet of cheese : '+guesss)
print('Original cheese : '+ c)
print('Current cheese status : '+disp())
print()

for i in range(9):
    x=rran()
    print("Start eating "+'\''+x+'\'')
    print('Eaten alphabet of cheese : '+scp())
    print('Original cheese : '+ c1)
    print('Current cheese status : '+dispp())
    print()

if dispp()=='_'*leng:
    print('Out of cheese!')
else :
    print('Finally remained Cheese Status : ')
    print('Eaten alphabet of cheese : '+' '.join(lss))
    print('Original cheese : '+c1)
    print('Current cheese status : '+dispp())
