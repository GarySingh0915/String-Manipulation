# String-Manipulation
Problem: Find a way to remove vowels (and optionally certain other groups of characters) from a string.

The Assignment: Design, develop, and test a C++ program that prompts the user to input a string
consisting of multiple words, including embedded spaces. The program then must use a user-defined
function to remove all the vowels from the string. Do not replace the vowels with a space or any other
character. For example, if str = “There”, then after removing all the vowels, str = “Thr”. After
removing all the vowels, output both the original and edited strings.

Discussion: Removing characters from a string involves two operations:
1) recognizing which characters in
the string fall within the group being removed, and 2) removing those characters from the string. Consider
the following steps to accomplish these tasks.

 Develop a function that accepts a string, examines the characters in the string, and removes each
character that is a member of the group known as “vowels”. Each vowel must be removed, and not
replaced with another character. The function must return a new string, and not an edited version
of the original string. The cases of all characters in the new string must match those of the original
string. The prototype for this function should be like “string noVowels(string s);”.

 Write a main program that reads a string of one or more words with embedded spaces from the
console, uses the user-defined function (described above) to remove all the vowels from the input
string, and then displays the input string and vowel-less edited string. Repeat till the user opts to
quit.
