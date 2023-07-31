// class Solution {
// public:
//   int climbStairs(int n)
// 	{
// 		if (n <= 2)
// 		{
// 			return n;
// 		}
// 		return climbStairs(n-1) + climbStairs(n-2);
// 	}
// };

// // n == 44...its take much time......

class Solution {
public:
  int climbStairs(int n) // Time complexity is O(n);
	{
		int current = 1;
    int previous = 1;
    for (int i = 1; i < n; i++) // manually find fibbocci numer,,,,because this wuestion parrtern like fibbonacci sequence,,
    {
      int next = current + previous;
      previous = current;
      current = next;
    }
    return current;
	}
};
