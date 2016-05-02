ll = []
flag = 0
sum = 0
for i in range(10):
	out='score'+ str(i+1) +':'
	a = int (raw_input(out))
	ll.append(a)
	sum = sum + a
	if a <= 60:
		flag = 1
ll.sort()
if flag == 0:
	print 60
else:
	print ll[4]-ll[4]%10

