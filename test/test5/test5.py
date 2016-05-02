def fun1 (a):
	num = ord(a)
	num = (num+1)%66+66
	a = chr(num)
	return a
def fun2 (a):
	num = ord(a)
	num = (num+2)%66+66
	a = chr(num)
	return a

str = raw_input()
ll = list(str)
flag = []
for i in range(len(ll)):
	flag.append(1)
for i in range(len(ll)):
	if i==0:
		continue
	else:
		if ll[i-1]==ll[i]:
			flag[i] = flag[i-1]+1
for i in range(len(ll)):
	if flag[i]%2==0:
		ll[i] = fun2(ll[i])
	if flag[i]%2==1:
		ll[i] = fun1(ll[i])
ss = ''
for i in range(len(ll)):
	ss = ss+ll[i]
print ss
