myList = [(1,7,4),(1,4),(4,3,0)]
x = len(myList)
for num in xrange(x):
	for baba in xrange(1,x-num):
		if myList[baba][1]<myList[baba-1][1]:
			temp = myList[baba]
			myList[baba] = myList[baba-1]
			myList[baba-1] = temp
		else:
			baba = baba+1

print len(myList[0])
print myList