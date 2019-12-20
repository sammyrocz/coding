
def solve(A:str)->int:
	left = 0
	right = 0
	ans = 0
	list  = set([])
	while right < len(s):
		        print(right)
    	        if s[right] in list:
    		        length = ((right-1) - left + 1)
    		        ans = max(ans,length)
    		        list.clear()
    		        left = right
    		        list.add(s[right])
    	        else:
                        list.add(s[right])
                        right+=1
        length = ((right - 1) - left + 1)
        ans = max(ans,length)
        return ans

tc = int(input())

while tc > 0:
	A = input()
	ans = solve(A)
	print(ans)
