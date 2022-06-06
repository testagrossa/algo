A - dynamic programming, sacrifices space to obtain the most performant solution in time
by storing historical values that you will look up later in the process to satisfy an equation.

In this case, at first place, the vector space was sorted now we have mathematical properties over it.
Then we traverse the input array and on every iteration we check if the coin is greater than our currentchange + 1.
In case it is, we finish and return the currenchange + 1, if not, we continue traversing the array and adding }
coins to currenchange until we find a result.