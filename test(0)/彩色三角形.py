high=int(input())
for i in range(1,high):
    print(' '*(high-i)+'\033[5m*'*(2*i-1))