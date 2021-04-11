import random
ls=[]
leng=int(input())
def getRandomString(leng):
    for i in range(1,leng+1) :
        a=chr(random.randint(97,122))
        ls.append(str(a))
    return (''.join(ls))

print(getRandomString(leng))

    
