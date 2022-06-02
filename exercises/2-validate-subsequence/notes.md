A&B. greedy, counts how many elements exists in both the arr and in the sequence, in the same order or appearence.
it loops over the the main array until either:
- it finished traversing it
- it found all elements in sequence
on each iteration it will check if the iterated element is equal to the target candidate in the sequence.
if so, it will mark the target as found by increasing the counter index.
this is considered a greedy algorithm because on every iteration the algorithm takes
the "most efficient decistion" it can make only using the information it has on context (no historical check).