TASK 1(B) - Find the degree of symmetry of a string

           Degree of symmetry is defined as the numbers of times you can divide (if can divide)
           a string such that both the remaining half are equal to each other.
           Example:
           A: the degree of symmetry is 0 as it cannot be divided.
           ABAB : the degree of symmetry is 1. It can be divided only once into AB - AB which can’t be divided
           further into equal strings.
           AAAA: the degree of symmetry is 2.It can be divided into AA - AA, each AA can be further divided
           into A-A which cannot be divided any further.
Constraints:

           Length of the string< =10^6.
           The length of the string is always a power of 2. (Note: 1 is a power of 2 (2^0))
           The string consists of lowercase alphabets only.
Input Format:

           The first line contains an integer n denoting the length of string   
           The second line contains a string of length n.
Output Format:

           Print an integer denoting the degree of symmetry.
Sample:-

Input 1:

           1
           a
Output 1:

           0
Input 2:
 
           4
           aaaa
Output 2:

           2
Input 3:

           16
           abcdefghhgfedcba
Output 3:

           0
Input 4:

           16
           abababababababab
Output 4:

           3
