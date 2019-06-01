TASK 1(D) - Determine the final rating

           Adit is a great coder. However, he has a strange addiction to Chennai Bakery’s Schezwan Chicken
           Noodles(SCN).
           We consider a duration of n days numbered from 1 to n. You are given the following information
           about each day i of the n days:
           1. Whether a contest takes place on day i or not.
           2. Whether he eats SCN on day i or not.
           Adit is able to perform well in a contest on a given day only if he eats SCN on the same day. His
           initial rating is r units. For every contest in which he performs well, his rating improves by x
           units. His rating decreases by y units otherwise. You have to determine his rating at the end of 
           the n days.
Input -
 
           The first line contains a positive integer n, r, x, y – the number of days under consideration, 
           his initial rating, the parameter x, and the parameter y respectively.
           The second line contains the sequence of integers c1, c2, ..., cn separated by space, where:· ci
           equals 1 if a contest takes place on the i-th day; 0 otherwise.
           The third line contains the sequence of integers s1, s2, ..., snseparated by space, where:· si
           equals 1 if he eats SCN on the i-th day; 0 otherwise.
Output -

         · Print a single line containing the string “promoted”(without quotes) if his rating is greater than his
           initial rating.
         · Print a single line containing the string “demoted”(without quotes) if his rating is lesser than his
           initial rating.
         · Print “no change” otherwise.
Constraints -

         · 1 ≤ n ≤ 109
         · 1 ≤ r ≤ 3000
         · 1 ≤ x, y ≤ 100
         · 0 ≤ ci ≤ 1
         · 0 ≤ si ≤ 1
Example :

Input -

           4 1500 20 5
           1 0 0 1
           1 1 0 1
Output -
   
           promoted
