str = raw_input()
ll = str.split(',')
max = 0
min = 100000
sum = 0
for i in range(len(ll)):
	ll[i] = int(ll[i])
	if ll[i] > max:
		max = ll[i]
	if ll[i] < min:
		min = ll[i]
for i in range(len(ll)):
	if ll[i] == max or ll[i] == min:
		sum = sum +1
print len(ll)-sum
#while str.find(',',0) != -1:
#	ss=str.find(',',0)
#	print ss