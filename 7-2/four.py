while(1):
    xy=input()
    if 97<=ord(xy)<=122 :
        xy=chr(ord(xy)-32)
        print(xy)
    elif 65<=ord(xy)<=90 :
        xy=chr(ord(xy)+32)
        print(xy)
    elif 48<=ord(xy)<=57:
        print(xy)
    elif ord(xy)!='\n' :
        print('exit')
        break
