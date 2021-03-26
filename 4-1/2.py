i=int(input())
j=int(input())
def add() :
    return i+j
def sub() :
    return i-j
def mul() :
    return i*j
def div() :
    return i/j
def mod() :
    return i%j
def printMsg() :
    print('completed')

print('sum: '+str(add()))
print('difference: '+str(sub()))
print('product: '+str(mul()))
print('division: '+str(div()))
print('remainder: '+str(mod()))
printMsg()
