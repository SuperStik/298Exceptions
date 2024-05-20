#include <iostream>
#include <stdexcept>
#include <string>

#define XSTR(s) STR(s)
#define STR(s) #s

// Sum the integers from 1 to n. For example, if n is 5, then
// sigma returns the sum 1 + 2 + 3 + 4 + 5 == 15.
// @param n integer upper bound of summation
// @pre n >= 1
// @post return value is the sum of the integers from 1 to n.
// @return sum of the integers from 1 to n, where n is
//         specified as an argument or 0 if an error occurred.
unsigned long sigma(unsigned long n) {
	unsigned long sum = 0;
	try {
		if (n == 0) {
			std::string message = "Precondition n>=1 violated; invalid value for argument n: " + std::to_string(n) + "Loc: " + __FILE__ + ", " + XSTR(__LINE__) + ')';
			throw std::runtime_error(message);
		}

		for (unsigned long i = 1; i <= n; ++i)
			sum += i;

		unsigned long fast = (n * (n+1))/2
		if (sum != fast) {
			std::string message = "Postcondition sum == (n(n+1))/2 violated: sum: " + std::to_string(fast) + " (Loc: " + __FILE__ + ", " + XSTR(__LINE__) + ')';
			throw std::runtime_error(message);
		}
	}
	return sum;
}

int main() {
	return 0;
}
