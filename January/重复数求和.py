m=int(input())
n=int(input())
sum=0
a=0
list=[]
for j in range(n+1):
    for i in range(j):
        a=m*(10**i)
        sum=sum+a
print(sum)
