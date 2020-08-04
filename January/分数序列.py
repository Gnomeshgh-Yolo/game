m=2
n=1
s=0
sum=0
count=int(input())
for i in range(count):
    sum=sum+s
    s=m/n
    t=m
    m=m+n
    n=t
sum=sum+(m/n)
print(sum)
