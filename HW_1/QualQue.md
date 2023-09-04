# Answers for qualitative questions
## Quest 1 (the main characteristics of the C++ language)
--compiled language
--multi - paradigm language(__*Imperative programming*__, __*Structural programming*__, __*OOP*__, __*Functional programming*__, __*Generalized programming*__, __*Metaprogramming*__)
--strict statistical typing
--support for high-level and low-level capabilities

## Quest 2 (fundamental data types)
--bool: takes 1 byte, not a bit  a variable of this type can have the values true and false 
--char: 1 byte — 256 symbols  the types char, wchar_t, char8_t, char16_t, and char32_t are built—in types representing alphanumeric characters, non-alphanumeric glyphs, and non-printable characters.
--int: 4 byte(short — 2 byte; long — 4 byte; long long — 8 byte), default selection for integer values
--signed/unsigned: default option for bit flags
--size_t: designed to display the size of any object in bytes: this returns size_of and many standard library functions
--float: 4 byte variables with a floating point that contains the value of a number, and an exponent that contains the ascending order of the number
--double:  8 byte variables with a floating point that contains the value of a number, and an exponent that contains the ascending order of the number (more accurate than float)
--void: it is mainly used to declare functions that do not return values, or to declare universal pointers to untyped or arbitrarily typed data  any expression can be explicitly converted or cast to the void type.

## Quest 3 (the problem of portability)
The actual code obtained depends on the specifics of the implementation of a particular computer and the type of processor used. A program written in a specific programming language requires a specific compiler to convert to machine code for a given processor.
### What about C++
> C++ at the operating system level is characterized by the same portability problems as C, as well as a number of its own. One of the additional problems is that the GNU open source compiler for C++ lags far behind commercial implementations
### Ways to prevent
--For example, you should separate the interface part of the code from the implementation in order to separate that part of the program and those modules that interact with the OS
--In order to ensure code portability between operating systems and compilers, the use of platform-dependent libraries should be avoided when developing various modules.
--One way to increase the portability of the program is to make the parameters independent of the system or processor by using the #define macro. This will make the parameters independent of the operating system or processor

## Quest 4 (declaration, initialization, definition and assignment)
--declaration: The declaration specifies the unique name of the entity, as well as information about its type and other characteristics.
    #include <string>

    int f(int i); // forward declaration

    int main()
    {
        const double pi = 3.14; //OK
        int i = f(2); //OK. f is forward-declared
        C obj; // error! C not yet declared.
        std::string str; // OK std::string is declared in <string> header
        j = 0; // error! No type specified.
        auto k = 0; // OK. type inferred as int by compiler.
    }

    int f(int i)
    {
        return i + 42;
    }

    namespace N {
    class C{/*...*/};
    }