
this simple code illustrates the basics of using argv/argc in c++ as a simple UI , it can be used in order to make tools in c++ 

objective ( print - reverse - upper - shuffleWord-shuffleStatement - delete - middle - add - random ) along with some simple error handling 

ilustration : read the code , it's too simple :) 

examples : 

- Command Line: a1.exe print my name is ahmed
Expected output: my name is ahmed


- Command Line: a1.exe reverse Cats love rabbits but rabbits hate cats
Expected output: cats hate rabbits but rabbits love cats

- Command Line: a1.exe upper i luv programming
Expected output: I LUV PROGRAMMING

- Command Line: a1.exe shuuffle structure
Expected output: tsurtcrue

- Command Line: a1.exe shuffleStatement Egypt has goodies
Expected output: has Egypt goodies

- Command Line: a1.exe delete 3 12 5 good 3 nice
Expected output: 12 5 3 nice

- Command Line: a1.exe middle 3 12 5 good 3 nice
Expected output: 5 good

- Command Line: a1.exe add 4 5 6 2
Expected output: 17

- Command Line: a1.exe random 10 1 10 4
a1.exe random sequenceLength minNumber maxNumber seedValue
Expected output: 8 2 10 3 10 1 7 8 7 1

- ERROR Handling
 number of arguments shall be checked for , the follwing error messages are used :
 Undefined Command
 Incorrect Number of Arguments
 Incorrect Data Type
