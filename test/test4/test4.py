str = raw_input()
ll = list(str)
ss = []
for i in range(len(ll)):
	if ll[i]=='(':
		ss.append(1)
	if ll[i]=='[':
		ss.append(2)
	if ll[i]==')':
		if(len(ss)==0):
#			print 0
			break
		elif ss[-1]==1:
			ss.pop()
		else :
#			print 0
			break
	if ll[i]==']':
		if(len(ss)==0):
#			print 0
			break
		elif ss[-1]==2:
			ss.pop()
		else :
#			print 0
			break
if len(ss)==0:
	print 0
else :print 1