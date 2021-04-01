def printLine(n) :
    for i in range(1,n+1) :
        for j in range(1,i+1) :
            print(str(j)+' ',end='')
        print()
    for i in range(n,0,-1) :
        for j in range(1,i+1) :
            print(str(j)+' ',end='')
        print()

a=int(input())
printLine(a)
