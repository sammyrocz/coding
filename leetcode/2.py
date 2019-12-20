class ListNode:
	def __init__(self,x):
		self.val = x
		self.next = None


def createList() -> ListNode:

	n = int(input())
	head = None
	tail = None
	for i in range(0,n):
		ele = int(input())
		tempnode = ListNode(ele) 
		if tail == None:
			head = tail = tempnode
		else:
			tail.next = tempnode
			tail = tail.next

	return head

def printlist(t1:ListNode):

	temp = t1

	while temp!= None:
		print(temp.val)
		temp = temp.next

def addToList(head:ListNode, tail: ListNode,tempnode: ListNode):

	if tail == None:
			head = tail = tempnode
	else:
		tail.next = tempnode
		tail = tail.next

	return [head,tail]


def addTwoNumbers(l1: ListNode, l2 : ListNode) -> ListNode:

	head1 = l1 
	head2 = l2
	anshead = None
	anstail = None
	carry = 0


	while head1!=None and head2!= None :
		val = head1.val + head2.val + carry
		carry = int((val / 10))
		val = val % 10

		tempnode = ListNode(val)
		temp = addToList(anshead,anstail,tempnode)
		anshead = temp[0]
		anstail = temp[1]
		head1 = head1.next
		head2 = head2.next
		


	while head1 != None:
		val = head1.val + carry
		carry = int((val/10))
		val = val % 10

		tempnode = ListNode(val)
		temp = addToList(anshead,anstail,tempnode)
		anshead = temp[0]
		anstail = temp[1]
		head1 = head1.next

	while head2 != None:
		val = head1.val + carry
		carry = int((val/10))
		val = val % 10


		tempnode = ListNode(val)
		temp = addToList(anshead,anstail,tempnode)
		anshead = temp[0]
		anstail = temp[1]
		head2 = head2.next

	if carry == 1:
		tempnode = ListNode(carry)
		temp = addToList(anshead,anstail,tempnode)
		anshead = temp[0]
		anstail = temp[1]		
	
	return anshead

l1 = createList()
l2 = createList()
val = addTwoNumbers(l1,l2)
printlist(val)

