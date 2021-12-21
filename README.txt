Exercise 2 - Function Calculator.


Exercise description:
In this exercise a function calculator is implemented that allows the addition and programming of new functions to the calculator.


The program has defined an Abstract class Function with the following methods:
calculte - Gets a  number and prints the evaluation of that number to a given function
expretion - accepts a string argument and returns the function as a string so that wherever the argument should be the string received is inserted.
From this class three concrete classes inherit:
Sin - Sinus.
Lan - Natural logarithm.
Poly - Polynomial.
The polynomial class receives a vector in its constructor with the
coefficients.

The Function class also inherits the abstract class CombinFunc where two members point (shared_ptr) to functions for the use of "add" "comp" "mul" classes.

The CombinFunc class inherits the following classes:
Addition - Connection of two functions.
Multiply - Multiply two functions.
Composite - Assembling functions.

The exercise also defined the funcCalculator class which manages the calculator.
This class has one public function - userMenu - the function that runs the calculator process which includes printing the list of functions and receiving calculator commands
In addition isLegal function  checks whether a function number and command are valid when receiving the user command in a string.


Header file list:
add.h
comp.h
Func.h
FuncList.h
Lan.h
Log.h
Mul.h
NumToStr.h
Poly.h
Sin.h

Source file list:
add.cpp
comp.cpp
Func.cpp
FuncList.cpp
Lan.cpp
Log.cpp
Mul.cpp
NumToStr.cpp
Poly.cpp
main.cpp

Main data structures:
The data structures used in the exercise are classes defined in the language (vector, string, shared_ptr).



Known bugs:
no known bugs.
