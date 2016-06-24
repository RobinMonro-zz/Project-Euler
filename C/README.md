### Using C

C is most easily used in Linux and requires compiling and running code through the terminal. A piece of code titled 'HelloWorld.c' can be compiled with the below command:
'''
gcc -Wall -std=99 -o HelloWorld HelloWorld.c
'''
* gcc is the name of the compiler
* -Wall tells the compiler to return all warnings
* -o defines the output file name
* lastly is the name of the file to be compiled

To run the compiled program 'HelloWorld', use the following command:
'''
./HelloWorld
'''
from within the file that the executable resides.
