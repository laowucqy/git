def fun (a):
	if ord(ss[a])>=ord('a') and ord(ss[a])<=ord('z'):
		return True
	elif ord(ss[a])>=ord('A') and ord(ss[a])<=ord('Z'):
		return True
	else:
		return False

ss = raw_input()
str = ''
ll = []
for i in range(len(ss)):
	if fun(i):
		str=str+ss[i]
	else:
		if len(str)!=0 :
			ll.append(str)
			str = ''
if len(str)!=0 :
	ll.append(str)
	str = ''
ll = list(set(ll))
for i in range(len(ll)):
	for j in range(len(ll)):
		if j<i:
			continue
		else :
			if len(ll[i])>len(ll[j]):
				str = ll[i]
				ll[i] = ll[j]
				ll[j] = str

for i in range(len(ll)):
	print ll[i],


