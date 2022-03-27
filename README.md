# Balanced-Strings
using a case switches, checks if a string is balanced or unbalanced.


What is a balanced string? 

source: https://www.baeldung.com/java-balanced-brackets-algorithm
A bracket is considered to be any of the following characters – “(“, “)”, “[“, “]”, “{“, “}”.

A set of brackets is considered to be a matched pair if an opening bracket, “(“, “[“, and “{“, occurs to the left of the corresponding closing bracket, “)”, “]”,  and “}”, respectively.
However, a string containing bracket pairs is not balanced if the set of brackets it encloses is not matched.

Similarly, a string containing non-bracket characters like a-z, A-Z, 0-9 or other special characters like #,$,@ is also considered to be unbalanced.

For example, if the input is “{[(])}”, the pair of square brackets, “[]”, encloses a single unbalanced opening round bracket, “(“. Similarly, the pair of round brackets, “()”, encloses a single unbalanced closing square bracket, “]”. Thus, the input string “{[(])}” is unbalanced.

Therefore, a string containing bracket characters is said to be balanced if:

A matching opening bracket occurs to the left of each corresponding closing bracket
Brackets enclosed within balanced brackets are also balanced
It does not contain any non-bracket characters
