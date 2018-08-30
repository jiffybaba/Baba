def fac(a):
	if(a==0):
		return 1
	else:
		return a*fac(a-1)



x = int(raw_input())
for num in xrange(0,x+1):
	for baba in xrange(0,num+1): 
		a= fac(num)/(fac(num-baba)*fac(baba)) 
		print a,
	else:
		print 
	
	

