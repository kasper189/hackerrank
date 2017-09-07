# Algorithmic Crush

You are given a list(1-indexed) of size , initialized with zeroes. 
You have to perform operations on the list and output the maximum of final values of all the elements in 
the list. For every operation, you are given three integers a, b and k and you have to add value to all the 
elements ranging from index to (both inclusive).

For example, consider a list of size . The initial list would be a = [0,0 0, ] and after performing the 
update 0=(a,b,k)=(2,3,30). 
The new list would be a = [0,30,30]. Here, we've added value 30 to elements between indices 2 and 3. Note the index of the list starts from 1.

## Input Format

The first line will contain two integers and separated by a single space.
Next lines will contain three integers , and separated by a single space.
Numbers in list are numbered from 1 to n.
 
## Output Format
 
Print in a single line the maximum value in the updated list.