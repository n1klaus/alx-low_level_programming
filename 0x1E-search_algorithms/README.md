# Search Algorithms

# Linear Search Algorithm
1. Set i to 0.
2. If Array[i] = T, go to step 4.
3. Increase i by 1 and go to step 2.
4. If i < n, the search terminates successfully; return i. Else, the search terminates unsuccessfully.

# Binary Search Algorithm
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
    while L != R do
        m := ceil((L + R) / 2)
        if A[m] > T then
            R := m − 1
        else:
            L := m
    if A[L] = T then
        return L
    return unsuccessful
```
