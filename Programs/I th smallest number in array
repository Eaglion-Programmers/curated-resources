# Python3 program to find K'th smallest element
# using min heap

# Class for Min Heap


class MinHeap:

	# Constructor
	def __init__(self, a, size):

		# list of elements in the heap
		self.harr = a

		# maximum possible size of min heap
		self.capacity = None

		# current number of elements in min heap
		self.heap_size = size

		i = int((self.heap_size - 1) / 2)
		while i >= 0:
			self.minHeapify(i)
			i -= 1

	def parent(self, i):
		return (i - 1) / 2

	def left(self, i):
		return 2 * i + 1

	def right(self, i):
		return 2 * i + 2

	# Returns minimum
	def getMin(self):
		return self.harr[0]

	# Method to remove minimum element (or root)
	# from min heap
	def extractMin(self):
		if self.heap_size == 0:
			return float("inf")

		# Store the minimum value
		root = self.harr[0]

		# If there are more than 1 items, move the last item
		# to root and call heapify
		if self.heap_size > 1:
			self.harr[0] = self.harr[self.heap_size - 1]
			self.minHeapify(0)
		self.heap_size -= 1
		return root

	# A recursive method to heapify a subtree with root at
	# given index. This method assumes that the subtrees
	# are already heapified
	def minHeapify(self, i):
		l = self.left(i)
		r = self.right(i)
		smallest = i
		if ((l < self.heap_size) and
				(self.harr[l] < self.harr[i])):
			smallest = l
		if ((r < self.heap_size) and
				(self.harr[r] < self.harr[smallest])):
			smallest = r
		if smallest != i:
			self.harr[i], self.harr[smallest] = (
				self.harr[smallest], self.harr[i])
			self.minHeapify(smallest)

# Function to return k'th smallest element in a given array


def kthSmallest(arr, N, K):

	# Build a heap of n elements in O(n) time
	mh = MinHeap(arr, N)

	# Do extract min (k-1) times
	for i in range(K - 1):
		mh.extractMin()

	# Return root
	return mh.getMin()


# Driver's code
if __name__ == '__main__':
	arr = [12, 3, 5, 7, 19]
	N = len(arr)
	K = 2

	# Function call
	print("K'th smallest element is", kthSmallest(arr, N, K))

# This Code is contributed by Kevin Joshi
