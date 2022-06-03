A - brute force, tries all possible combinations of inputs to find the expected result.
usually its the worst performant but its the easiest way to find the correct solution
In this case we go through the input array.
It ends when we achive the lenght "n" of the imput array
On each iteration we calculate the square of each element and keep the results in another array
Finally we sort the result array, called it sortedSquares, in asc order. 

B. greedy, because the vector space was sorted now we have mathematical properties over it.
this is considered a greedy algorithm because on every iteration the algorithm takes
the "most efficient decistion" it can make only using the information it has on context (no historical check).
In this case we define two pointers, one at begining and other at the end.
We traverse the input array and on every iteration we check which pointer value has the biggest absolute value and depending on that we:
    - calculate the square 
    - save it into the called sortedSquares in the last available slot
    - move the bigest pointer to the center