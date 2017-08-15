import itertools
split_input = input.split()
x = map(int, split_input)
y = map(int, split_input)
result = ""
for e in list(itertools.product(x, y))):
	result = ' '.join(str(e))
	print result 