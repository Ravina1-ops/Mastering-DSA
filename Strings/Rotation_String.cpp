/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false*/


/*
A rotation shifts the characters of the string to the right, one by one. The simplest way to solve this problem is to simulate each possible rotation of the string s and compare the result to the goal.

If the lengths of s and goal are not equal, there's no way s can be rotated to become goal. This is the base case. If they are of equal length, we can then proceed with checking each rotation.

To simulate a rotation, we move the first character of s to the end and compare the new string with goal. We repeat this process for every possible rotation. If at any point, s matches goal, we can conclude that the rotation works, and we return true. If none of the rotations match the goal, we return false.

Algorithm
Check if the lengths of s and goal are different:

If they are not equal, return false since one string cannot be a rotation of the other.
Initialize length to store the length of string s.

Use a loop to attempt all possible rotations of s:

For each possible rotation count from 0 to length - 1:
Perform one left rotation on s, moving the first character to the end of the string.
Check if the rotated string s is equal to goal:
If they are equal, return true, indicating that goal is a rotation of s.
If all rotations have been checked and none match goal, return false.*/