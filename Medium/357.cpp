// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:	
	static int countNumbersWithUniqueDigits(int n) {
		if (n == 0) return 1;
		// when n = 1, return 10
		auto result = 10;
		// f(k) = 10 + 9 * 8 * ... * (11 - k)
		auto t = 9;
		for (auto i = 2; i <= n; i++)
		{
			t *= 11 - i;
			result += t;
		}
		return result;
	}

};

int main()
{	
	Solution s;
	cout << s.countNumbersWithUniqueDigits(3) << endl;
	getchar();
	return 0;
}
// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:	
	static int countNumbersWithUniqueDigits(int n) {
		if (n == 0) return 1;
		// when n = 1, return 10
		auto result = 10;
		// f(k) = 10 + 9 * 8 * ... * (11 - k)
		auto t = 9;
		for (auto i = 2; i <= n; i++)
		{
			t *= 11 - i;
			result += t;
		}
		return result;
	}

};

int main()
{	
	Solution s;
	cout << s.countNumbersWithUniqueDigits(3) << endl;
	getchar();
	return 0;
}
// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:	
	static int countNumbersWithUniqueDigits(int n) {
		if (n == 0) return 1;
		// when n = 1, return 10
		auto result = 10;
		// f(k) = 10 + 9 * 8 * ... * (11 - k)
		auto t = 9;
		for (auto i = 2; i <= n; i++)
		{
			t *= 11 - i;
			result += t;
		}
		return result;
	}

};

int main()
{	
	Solution s;
	cout << s.countNumbersWithUniqueDigits(3) << endl;
	getchar();
	return 0;
}
// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:	
	static int countNumbersWithUniqueDigits(int n) {
		if (n == 0) return 1;
		// when n = 1, return 10
		auto result = 10;
		// f(k) = 10 + 9 * 8 * ... * (11 - k)
		auto t = 9;
		for (auto i = 2; i <= n; i++)
		{
			t *= 11 - i;
			result += t;
		}
		return result;
	}

};

int main()
{	
	Solution s;
	cout << s.countNumbersWithUniqueDigits(3) << endl;
	getchar();
	return 0;
}
