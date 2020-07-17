'''
#4-3
for i in range(1,21):
    print(i,end=' ')#如何将循环中的内容在同一行输出,在print后添加(end=" "),因为在python中默认end=\n,只需改变为空格.
'''
'''
#4-4
numbers=list(range(1,1000001))
for i in range(1,1000001):
    print(numbers[i],end=" ")
'''
'''
#4-s
numbers=[]
for i in range(1,1000001):
    number=i
    numbers.append(number)
print(min(numbers))
print(max(numbers))
print(sum(numbers))
'''
'''
#4-6
even_numbers=list(range(1,20,2))
for i in range(10):
    print(even_numbers[i])
'''
'''
#4-7
numbers=[]
for value in range(3,31):
    if value%3==0:
        numbers.append(value)
for i in range(len(numbers)):
    print(numbers[i],end=" ")
'''
'''
#4-8
squares=[]
for value in range(1,11):
    square=value**3
    squares,append(square)
for i in range(len(squares)):
    print(squares[i],end=" ")
'''
'''
#4-9
squares=[value**3 for value in range(1,11)]
print(squares)
'''