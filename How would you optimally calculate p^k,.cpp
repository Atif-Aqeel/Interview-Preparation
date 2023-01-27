/*
How would you optimally calculate p^k, where k is a non-negative integer? What is the complexity of the solution?

First, let’s mention that the trivial solution has the complexity of O(k). The problem can be solved by squaring and multiplying.
We know that p^k = p^x * p^y if x+y=k. We also know that p^k = (p^a)^b if a*b=k.
For an even value of k, choosing a = 2 and b = k/2, thus having p^k = (p^2)^(k/2), will reduce the number of required multiplications almost in half. 
For an odd value of k, choosing x = 1 and y=k-1 will result in y being even, and we can then simply repeat the same process as for the even case. 
This allows us to define a recursive function:

FUNCTION pow(base, exponent)
	IF exponent == 0
		RETURN 1
	ELSE IF exponent is even
		RETURN pow(base * base, exponent / 2)
	ELSE
		RETURN base * pow(base * base, (exponent - 1) / 2)
	END IF
	
This solution results in a complexity of O(log k).
*/


