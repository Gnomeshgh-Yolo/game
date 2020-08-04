s=[int(n) for n in input().split(",")]
s=s.sort()
for i in range(len(s)):
    print(s[i],end=' ')
