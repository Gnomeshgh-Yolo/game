year=int(input("year:"))
month=int(input("month:"))
day=int(input("day:"))
if (year%400==0) or (year%4==0 and year%100!=0):
    list1=[0,31,60,91,121,152,182,213,244,274,305,335]
    date=list1[month-1]+day
else:
    list2=[0,31,59,90,120,151,181,212,243,273,304,334]
    date=list2[month-1]+day
print(date)
    