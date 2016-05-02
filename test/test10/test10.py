ll = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]
s = int(raw_input())
num = len(ll)
for i in range(num):
	for j in range(num):
		flag = 0
		if i==j:
			continue
		elif ll[i]+ll[j]==s:
				print ll[i],ll[j]
				flag = 1
				break
	if flag==1:
		break