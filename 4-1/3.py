n=int(input())
gMul=1

def addTotal() :
    a=0
    for i in range(1,n+1) :
        a=a+i
    return a
    
def mulTotal() :
    global gMul
    for j in range(1,n+1) :
        gMul=gMul*j
        

print('addTotal(): ' + str(addTotal()))
mulTotal()
print('gMul: ' + str(gMul))
