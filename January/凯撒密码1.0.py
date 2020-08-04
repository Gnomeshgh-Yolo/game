import os
list1=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C']
list2=[]
v=input()
v=list(v.upper())
for i in range(len(v)):
    p=list1.index(v[i])
    list2.append(list1[p+3])
for i in range(len(list2)):
    print(list2[i],end="")
os.system("pasue")

