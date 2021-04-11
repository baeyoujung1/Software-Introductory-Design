import random
number=[]
for i in range(1,101):
    dom=random.randint(1,1000)
    number.append(dom)

for i in range(1,101):
    print(number[i-1],end=' ')
print('\n')
a=number[i-1]
for i in number:
    if a<i:
        a=i

print('max value: '+str(a))
