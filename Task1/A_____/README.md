TASK 1(A) - Decomposing binary strings as averages of two others
          
          Sri Harsha is a very curious fellow. He started to wonder about binary numbers and how you can
          represent them as strings. But, due to his exceptional nature, this was not enough for him. He
          wondered if a binary string could be decomposed into the average of two different binary strings of
          equal length as the original string.

          Example:
          1101 (13) can be expressed as the average of 1011 (11) and 1111 (15).
          Note: It can also be expressed as the average of 0000 and 11010 but the second string has length
          greater than the original string.
Constraints:

          Length of the string<=105.
          The string is composed of zeroes or ones.
Input Format:

          The first line is the length of the string.
          The second line is the string.
Output Format:

          If it is not possible to print two strings pertaining to the conditions prescribed the print –1 
          on one line. Otherwise, output 2 space-separated strings with the first string being the lesser
          string. The strings should obey the conditions prescribed above.
          If there are multiple answers, you can print any of them.
Sample:-

Input:
       
          4
          1101
Output:

          1011 1111
