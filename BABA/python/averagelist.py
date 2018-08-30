
list = []
x = int(raw_input("Type no. of entries: "))

for a in xrange(0,x):
	c = int(raw_input())
	list += [c]

b=0
for a in list:
	b=a+b
print float(b)/x


