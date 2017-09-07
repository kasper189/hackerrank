# 2D Array

Given a 2D Array, :

1 1 1 0 0 0 <br />
0 1 0 0 0 0 <br />
1 1 1 0 0 0 <br />
0 0 0 0 0 0 <br />
0 0 0 0 0 0 <br />
0 0 0 0 0 0 <br />

We define an hourglass in to be a subset of values with indices falling in this pattern in 's graphical representation:

a b c <br />
&nbsp;&nbsp;  d <br />
e f g <br />

There are hourglasses in , and an hourglass sum is the sum of an hourglass' values.

## Task
Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum.


## Input Format

There are lines of input, where each line contains space-separated integers describing 2D Array ; every value in will be in the inclusive range of to .


## Output Format

Print the largest (maximum) hourglass sum found in .