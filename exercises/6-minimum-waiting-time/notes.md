A. greedy, this is considered a greedy algorithm because on every iteration the algorithm takes
the "most efficient decistion" it can make only using the information it has on context (no historical check).

In this case, in first place we order de input array. Then, we traverse it so we can:
- keep track of the queries left
- know the duration of each querie
- calculate the total waiting time by multiplying the duration of current querie * current queries left.