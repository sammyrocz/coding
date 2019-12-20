tc = int(input())

list = [0]*101

list[0] = list[1] = 1
print(list)

for x in range(2,101):
	for y in range(0,x):
		list[x] += list[y] * list[x-1-y]

print(list)

for x in range(0,tc):
	no = int(input())
	print(list[no])


