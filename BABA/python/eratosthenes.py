baba = int(raw_input())
while baba>0:

	t = int(raw_input())
	x = int(raw_input())


	myList = [num for num in xrange(0,x+1)]

	myList[1] = 0

	for num in xrange(2,x+1):
		if myList[num]!= 0:
			a=2*num
			while a<x+1:
				myList[a] = 0
				a+=num


	for num in xrange(2,x+1):
		if(myList[num]!=0 and myList[num] >= t):
			print myList[num]

	print "\n"

	baba = baba-1