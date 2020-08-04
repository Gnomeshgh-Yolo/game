a=0
list=[1]
for j in range(2,1001):
    for i in range(2,(j//2)+1):
        a=j%i
        if a==0:
            list.append(i)
            if i==j//2:
                if j==sum(list):
                    print(j)
                    list=[1]
                    break