m=int(input("请输入两个整数确定区间范围:"))
n=int(input())
numbers=[]
for i in range(m,n):
    for j in range(2,i):
        if i==(j-1):
            numbers.append(i)
print(numbers)




