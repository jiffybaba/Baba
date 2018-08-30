x = int(raw_input())
b=x
rem =0
while x>0:
	
	a = x%10
	rem = rem*10 +a
	x = x/10

print rem


"""for palindrome"""
if rem ==b:
	print 'YES'
else:
	print 'NO'