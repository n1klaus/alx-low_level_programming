# Search Algorithms

# Linear Search Algorithm
Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.

1. Set i to 0.
2. If Array[i] = T, go to step 4.
3. Increase i by 1 and go to step 2.
4. If i < n, the search terminates successfully; return i. Else, the search terminates unsuccessfully.

# Binary Search Algorithm
Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half

1. Set Left to 0 and Right to size - 1
2. While Left != Right
	1. Set Middle(the position of the middle element) to the ceiling of
	   (Left + Right)/2, which is the least integer greater than or equal
	   ot (Left + Right) / 2
	2. If Array[Middle] > Value, set Right to Middle - 1
	3. Else, Array[Middle] <= Value; set Left to Middle
3. Now Left = Right, the search is done. If Array[Left] = Value, return Left,
   Otherwise, the search terminates as unsuccessful

``` c
procedure binary_search(Array : array of elements, n : size of array, T : value to search):

	L := 0
	R := n − 1
	while L <= R do
		m := ceil((L + (R - L)) / 2)
		if A[m] > T then
			R := m − 1
		else:
			L := m + 1
		end if
	end while

	if A[L] == T then
		return L
	else
		return unsuccessful
	end if
end procedure
```

# Jump Search Algorithm
A search algorithm implemented by jumping ahead by fixed steps or skipping some elements in place of searching all elements.

``` c
procedure JumpSearch(L : An ordered list, s : a search key):

	size := length(L)
	index := 0 /* start index */
	step := √size /* block size to be jumped */

	/* Find the block where the key is present */
	while L[min(step, size) - 1] < s do
		index := step
		step := step + √n
		if index ≥ size then
			return unsuccessful
		end if
	end while
	
	/* Do a linear search in the current block */
	while L[index] < s do
		index := index + 1
		if index == min(step, size)
			return unsuccessful
		end if
	end while
	
	if L[index] == s then
		return index
	else
		return unsuccessful
	end if
end procedure
```