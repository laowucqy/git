str = raw_input()
ll = list(str)
ans = ''
for str in ll:
	if str==' ':
		str = '%20'
	ans = ans+str
print ans