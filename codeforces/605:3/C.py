tc = input().split()
n = tc[0]
a = tc[1]
s = input()
avail = input().split()
freq = [0]*26
for a in avail:
	index = ord(a) - ord('a')
	freq[index] = 1;

right = 0
left = 0
val = 0
while right < len(s):
	index = ord(s[right]) - ord('a')

	if freq[index] == 1:
		right+=1
		continue

	val = val + ((right - left)+1) * (len(s) - right)
	right+=1
	left = right

total = (len(s)*(len(s) + 1))
total = total / 2
total = int(total)
val = total - val
print(val)




