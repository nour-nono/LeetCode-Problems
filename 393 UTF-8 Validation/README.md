problem link: https://leetcode.com/problems/utf-8-validation/

problem name: UTF-8 Validation

problem difficulty: Medium

the problem is about validating a list of integers if they are a valid utf8 encoding or not

the problem is simple and can be solved by iterating over the list of integers and checking if they are a valid utf8 encoding or not

what is a valid utf8 encoding?

A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:

For a 1-byte character, the first bit is a 0, followed by its Unicode code.
example: 0xxxxxxx

x denotes a bit in the binary form of a byte that may be either 0 or 1.

For an n-bytes character, the first n bits are all one's, the n + 1 bit is 0, followed by n - 1 bytes with the most significant 2 bits being 10.
example: n = 2, 110xxxxx 10xxxxxx or n = 3, 1110xxxx 10xxxxxx 10xxxxxx

an example of a valid utf8 encoding is: [197, 130, 1] 

the binary form is: 11000101 10000010 00000001

those binary numbers would be translated like this: 110xxxxx 10xxxxxx 0xxxxxxx
x's are the bits that will be filled with the bits of the characters
in our case, the first byte is 11000101, the first 3 bits are 110, so it's a 2-byte character
the second byte is 10000010, the first 2 bits are 10, so it's a continuation byte
the third byte is 00000001, the first bit is 0, so it's a 1-byte character
so the result are 2 characters, the first character is 00101000010, and the second character is 00000001
so the encoding is valid
