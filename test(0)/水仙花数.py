number=int(input())
if number in range(100,1000):
    ge=(number / 1)%10
    shi=(number / 10)%10
    bai=(number / 100)%10
    sum=ge**3+shi**3+bai**3
    if sum==number:
        print("the number is Narcissistic number")
    else:
        print("the number is not Narcissistic number")
else:
    print("please input a number again")