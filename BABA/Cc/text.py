import string
def isPangram(arg):
	alphabet = string.ascii_lowercase
	x = 4
	for letter in alphabet:
		ctr = 0
		for baba in arg:
			if baba == letter:
				ctr += 1

		if ctr == 0:
			x =5
			print 'NO'
			break

	if x == 4:
		print 'YES'



isPangram('I wanna kill you')