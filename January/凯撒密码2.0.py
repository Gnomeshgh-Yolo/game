new=input()
for i in range(len(new):
    if ord('A')<=ord(i)<=ord('Z'):
        onew=chr(ord('A')+(ord(i)-ord('A')+3)%26)
    elif ord('a')<=ord(i)<=ord('z'):
        onew=chr(ord('a')+(ord(i)-ord('a')+3)%26)
    else:
        onew=new
    print(onew,end="")
    