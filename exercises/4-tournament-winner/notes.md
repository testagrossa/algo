A - dynamic programming, sacrifices space to obtain the most performant solution in time
by storing historical values that you will look up later in the process to satisfy an equation.

In this case, at first place we define a flag, to keep track the current best team and an a data structure to save scores.
Then we traverse the input array and on every iteration we check:
    - which team won current competition
    - the points of the winning team, add or update
    - the current best team is obtained by comparing the team keeped in the flag and the wining team score in score structure.
Finally, when we end traversing the array, we will have the winning team saved on our flag.
