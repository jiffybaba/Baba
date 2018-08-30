myList = []
a = int(raw_input())

for num in xrange(0,a):
	x = int(raw_input())
	myList.append(x)
max = myList[0]
for num in xrange(1,a):
	if myList[num]>max:
		max = myList[num]


print "\n%d" %(max)