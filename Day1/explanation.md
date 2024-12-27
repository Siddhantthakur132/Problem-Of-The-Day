Problem Statement
Rearrange the vowels in a given string s in sorted order while keeping the consonants in their original positions.

Steps of the Solution
Identify Vowels:
Use two frequency arrays, one for uppercase vowels and one for lowercase vowels, to track their occurrences.

Replace Vowels with a Placeholder:
Replace vowels in the original string with a placeholder (#) for easy identification later.

Sort Vowels:
Append vowels in sorted order (both uppercase and lowercase) to a result string.

Reintegrate Vowels:
Traverse the original string and replace each placeholder with vowels from the sorted result string.

Return the Updated String:
After replacing all placeholders, return the modified string.

Example Execution
Input: leetcode

Uppercase Vowels: None
Lowercase Vowels: e, e, o
Sorted Vowels: e, e, o
Result: leetcodo

