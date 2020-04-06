# Chapter 3: Objects, Types and Values

* An *object* is a region in memory with a *type* that specifies what kind of information can be placed in it.
* A named object is called a *variable*.
* cin - standard input stream
* Program does not process steps after cin until <kbd>Enter</kbd> is pressed.
* Some types in C++:
    * int - integers 
    * double - double precision floating point numbers (64 bits to represesnt a number, whereas single precision float uses 32 bits)
    * char - individual characters
    * string - character strings
    * bool - for logical variable - eg. bool tap_on = true;
* '>>' - get from - input operation
    * sensitive to type
    * reading of strings is terminated by whitespace (space, newline, tab characters)
    * will ignore leading whitespace
* '+' operator concatenates strings.
* sqrt(n) - Returns square root of a number.
* '<', '>' and '==' can be used to compare strings.
* A name starts with a letter and contains only letters, digits and underscores.
* A declaration is a statement that gives a name to an object.
* A definition is a declaration that sets aside memory for an object.
* String objects have two parts:
    1. Contains the length of the string.
    2. Contains the string data.
* Always initialize variables.
* Type safety - A program or part of a program is type safe when objects are used only according to the rules for their type.
* A safe type conversion is one in which no information is lost. eg. char to int - char gets converted to ascii value
* Safe conversions:
    * bool to char
    * bool to int
    * bool to double
    * char to int
    * char to double
    * int to double
* Unsafe conversions:
    * double to int
    * double to char
    * double to bool
    * int to char
    * int to bool
    * char to bool
* double to int truncates decimal part.
* Universal and uniform initialization: Shows warnings for unsafe conversions.
```cpp
double x {2.7};
int y {x}; // warning: double -> int might narrow

int a {1000};
char b {a}; // warning: int -> char might narrow

int char b1 {1000}; // warning: narrowing (assuming 8bit chars)
char b2 {53} // OK
```
