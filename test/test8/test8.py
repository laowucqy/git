ll1=["A1","A2","A3","A4","A5","A6","A7","A8","A9","T1","A10","A11","A12","A13","T2","A14","A15","A16","A17","A18"]
ll2=["B1","B2","B3","B4","B5","T1","B6","B7","B8","B9","B10","T2","B11","B12","B13","B14","B15"]
def get_distace1(a,b):
	i = ll1.index(a)
	j = ll1.index(b)
	if i>j :
		num=i-j
	else:
		num=j-i
	if num>len(ll1)/2:
		num = len(ll1)-num
	return num-1
def get_distace2(a,b):
	i = ll2.index(a)
	j = ll2.index(b)
	if i>j :
		num=i-j
	else:
		num=j-i
	if i<=5 and j>=11:
		num = num-1
	return num-1
start = raw_input()
end = raw_input()
if start[0]=='A' and end[0]=='A':
	print get_distace1(start,end)
elif start[0]=='B' and end[0]=='B':
	print get_distace2(start,end)
elif start[0]=='A' and end[0]=='B':
	dis1=get_distace1("T1",start)+get_distace2("T1",end)
	dis2=get_distace1("T2",start)+get_distace2("T2",end)
	if dis1<dis2:
		print dis1
	else:
		print dis2
elif start[0]=='B' and end[0]=='A':
	dis1=get_distace2("T1",start)+get_distace1("T1",end)
	dis2=get_distace2("T2",start)+get_distace1("T2",end)
	if dis1<dis2:
		print dis1
	else:
		print dis2
