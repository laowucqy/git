n = int (raw_input('input a number:'))
ll = range(n+1)
ll.pop(0)
num = []
for i in ll:
	num.insert(i,0)
for i in ll:
	for j in ll:
		if j>=i and j%i==0:
			num[j-1] = num[j-1] + 1
ans = 0 
for i in ll:
	if num[i-1]%2==0:
		ans = ans + 1
print ans
