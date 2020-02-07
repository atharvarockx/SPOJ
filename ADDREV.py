for z in range(int(input())):
	a,b=input().split(" ")
	a=a[::-1]
	b=b[::-1]
	c=int(a)+int(b)
	d=str(c)
	d=d[::-1]
	print(int(d))
