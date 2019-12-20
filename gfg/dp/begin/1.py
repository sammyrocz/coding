import heapq as heap
tc = int(input())

list = [1]
def solve(n):
	two = 0
	three = 0
	five = 0
	ntw = 2
	ntt = 3
	ntf = 5
	no = 1
	for i in range (1,n):
		no = min(ntw,ntt,ntf)

		list.append(no)

		if no == ntw:
			two = two + 1
			ntw = list[two]*2
		if no == ntt:
			three = three + 1
			ntt = list[three]*3
		if no == ntf:
			five = five + 1
			ntf = list[five]*5

solve(10000)
for x in range(0,tc):
	no = int(input())
	output = list[no-1]
	print(output)
	