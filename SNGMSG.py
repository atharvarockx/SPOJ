for z in range(int(input())):
    a=input()
    b=a+a[::-1]
    print(b)
    s=input()
    s1=""
    j=0
    for i in range(len(s)):
        j=j%(len(b))
        c=ord(s[i])-int(b[j])
        j=j+1
        if c<97:
            c=122-(96-c)
        s1=s1+chr(c)
        
    print(s1)
        
