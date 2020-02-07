l=[]
for z in range(int(input())):
    l.append(int(input()))
for i in l:
    if i%2!=0:
        print(i)
    else:
        a=bin(i)
        a=a[2::]
        a=a[::-1]
        print(int(a,2))
