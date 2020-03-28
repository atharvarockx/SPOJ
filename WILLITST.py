# your code goes here
n=int(input())
f=0
if n%2!=0:
    print("NIE")
    f=1
else:
    c=0
    while c==0:
        n=n//2
        if n%2!=0 and n!=1:
            c=1
        elif n==1:
            c=0
            break
            
    if c==1:
        print("NIE")
    else:
        print("TAK")
