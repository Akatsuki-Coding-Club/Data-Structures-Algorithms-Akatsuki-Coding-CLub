/*
Trailing zeroes in factorial
Difficulty: Easy

For an integer N find the number of trailing zeroes in N!.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input:
N = 5
Output:
1
Explanation:
5! = 120 so the number of trailing zero is 1.
Example 2:

Input:
N = 4
Output:
0
Explanation:
4! = 24 so the number of trailing zero is 0.
Constraints:

1 <= N <= 109
Your Task:

You don't need to read input or print anything. Your task is to complete the function
trailingZeroes() which take an integer N as an input parameter and returns the count of trailing zeroes in the N!.
Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)
*/

/*
Here's a brief explanation:

fun() Function: This function calculates the number of trailing zeroes in N! (N factorial). It uses a while loop to repeatedly divide N by 5 and accumulates the count of the quotient in the 'count' variable. This is based on the fact that trailing zeroes result from pairs of 2 and 5 in the factorial, and 5 occurs less frequently than 2, so the count of 5's in the factorization determines the number of trailing zeroes.

trailingZeroes() Function: This function is the main driver. It calls the 'fun()' function to calculate the number of trailing zeroes in N!.

Time Complexity : O(log5(n))
Space Complexity : O(1)
*/
class Solution {
public:
    // Function to calculate the basic log5(N).
    int fun(int N) {
        int count = 0;
        while (N) {
            count += (N / 5);
            N /= 5;
        }
        return count;
    }

    // Function to find the number of trailing zeroes in N!
    int trailingZeroes(int N) {
        // As we know, a single zero can be formed with a product of 2 and 5,
        // so our task is to calculate the power of 2 and 5, and the minimum of the two is our answer.

        // One key observation is that the power of 5 will always be less than the power of 2,
        // so essentially we have to calculate the power of 5.

        // This can be calculated using a simple function.
        return fun(N);
    }
};