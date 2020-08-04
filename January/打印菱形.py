kongxin=chr(9711)
high=int(input())
for i in range(1,high):
    print(' '*(high-i)+kongxin*(2*i-1))
for j in range(high,0,-1):
    print(' '*(high-j)+kongxin*(2*j-1))
