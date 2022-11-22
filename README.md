# About the project
This is a task that was given to me as part of a job interview. This is my solution, and I give no guarantee that it is correct, or efficient as was requested. This is merely my best effort at the time.

# Task
The questions should be answered in C++, in the most efficient way you can, all answers should be explained in detail.

Given an input text string and a simple text pattern, find the starting indices of all matches of the pattern in the input text string.

ex: "abracadabra" + "abr" = [0, 7]

# Usage

./FindSubstring
or
./FindSubstring <string or length> <substring or length>

ex:
./FindSubstring
./FindSubstring abc bc
./FindSubstring 100 2
./FindSubstring abc 2
./FindSubstring 3 bc

When using a string, it will be used explicitly. When entering a number, it will be used as the length for the randomly generated string in its place.
When calling without parameters, 2 strings of predefined hardcoded length will be randomly generated.

# Thought process and ideas
