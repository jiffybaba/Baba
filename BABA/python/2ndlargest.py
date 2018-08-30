myList = []
a = int(raw_input())

for num in xrange(0,a):
	x = int(raw_input())
	myList.append(x)
max = myList[0]
for num in xrange(1,a):
	if myList[num]>max:
		max = myList[num]
c=0
for num in xrange(0,a):
	if myList[num] == max:
		c=c+1

for num in xrange(0,c):
	myList.remove(max)


max = myList[0]
for num in xrange(1,len(myList)):
	if myList[num]>max:
		max = myList[num]


print max


