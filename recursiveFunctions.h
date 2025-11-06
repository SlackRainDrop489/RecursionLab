//
// Quinn Alvine
// 11/6/25
//

#ifndef RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H
#define RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H

#include <iostream>

using namespace std;

// --- Challenge 1: Function Prototypes ---

/**
 * @brief Calculates the factorial of a non-negative integer recursively.
 * @param n The number.
 * @return n! (n factorial)
 */
// TODO: Write a recursive function to calculate n factorial
inline long long factorial(int n) {
 if (n == 0) {
  return 1;
 }
 return (long long) n * factorial(n - 1);
}

/**
 * @brief Calculates the nth Fibonacci number recursively.
 * @param n The position in the sequence (0-indexed).
 * @return The Fibonacci number at position n.
 */
// TODO: Write a recursive function that calculates the fibonacci value at position n
inline int fibonacci(int n) {
 if (n == 0 || n == 1) {
  return n;
 }
 return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * @brief Calculates the sum of the digits of a non-negative integer recursively.
 * @param n The number.
 * @return The sum of its digits.
 */
// TODO: Write a recursive function that calculates the sum of a series of digits
inline int sumDigits(int n) {
 // If n is just one digit then it would just be the same number
 if (n < 10) {
  return n;
 }
 return (n % 10) + sumDigits(n / 10);
}


// --- Challenge 2: Function Prototype ---

/**
 * @brief Solves the Tower of Hanoi puzzle recursively.
 *
 * Prints the steps required to move n discs from a source peg
 * to a destination peg using an auxiliary peg.
 *
 * @param n The number of discs.
 * @param source The source peg (e.g., 'A').
 * @param auxiliary The auxiliary peg (e.g., 'B').
 * @param destination The destination peg (e.g., 'C').
 */
// TODO: Write a recursive function that solves the "Towers of Hanoi" problem
inline void towerOfHanoi(int n, char source, char auxiliary, char destination) {
 if (n == 1) {
  cout << "Move disc 1 from " << source << " to " << destination << endl;
  return;
 }
 towerOfHanoi(n - 1, source, destination, auxiliary);
 cout << "Move disc " << n << " from " << source << " to " << destination << endl;
 towerOfHanoi(n - 1, auxiliary, source, destination);
}


#endif //RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H