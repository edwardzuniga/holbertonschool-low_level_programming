0x09. C - Static libraries

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm
Requirements
C
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
Bash
Allowed editors: vi, vim, emacs
All your scripts will be tested on Ubuntu 20.04 LTS
All your files should end with a new line (why?)
The first line of all your files should be exactly #!/bin/bash
A README.md file, at the root of the folder of the project, describing what each script is doing
All your files must be executable
More Info
You do not need to learn about dynamic libraries, yet.

Manual QA Review
It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.

0. A library is not a luxury but one of the necessities of life
mandatory
Create the static library libmy.a containing all the functions listed below:

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

1. Without libraries what have we? We have no past and no future
mandatory
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

2. Either write something worth reading or do something worth writing
mandatory
Write a blog post on C static libraries. It should cover:

Why use libraries
How they work
How to create them
How to use them
Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on LinkedIn.

When done, please add all urls below (blog post, LinkedIn post, etc.)

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings