l=[]
n=int(input())
for z in range(n):
    l.append(int(input()))
a=n
for i in range(n-1,-1,-1):
    if l[i]==a:
        a=a-1
print(a)        
    
