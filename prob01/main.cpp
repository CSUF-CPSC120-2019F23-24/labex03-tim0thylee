// This program tests output on the ASCII character set, and on the sizeof operator.

#include <iostream>

int main()
{
  // TODO#1: try changing these values to others found in the ASCII character set
  // The class Quick Reference Guide contains this chart on page 5
  char my_char1 = 79;   // decimal
  char my_char2 = 0x4F; // hex
  char my_char3 = 'O';  // character

  std::cout << "Char1: " << my_char1 << std::endl;
  std::cout << "Char2: " << my_char2 << std::endl;
  std::cout << "Char3: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#2: the following statement displays a plus sign
  // add 3 more cout statements that all print the same thing - a plus sign
  // however, use a different method to do so for each cout statement
  // hint: use the ASCII character set

  char plus_decimal = 43; //decimal
  char plus_hexi = 0x2B; //hex

  std::cout << "+" << std::endl;
  std::cout << '+' << std::endl;
  std::cout << plus_decimal << std::endl;
  std::cout << plus_hexi << std::endl;



  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#3: update the following statement to include escape characters
  // note that clang does not require an escape character on the single quote
  // but many other compilers do require it
  std::cout << "\'Y\'" << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#4: try changing the variable types and the data types in the
  // statements below to see what is returned by the sizeof operator
  char my_char = 'A';
  std::cout << my_char << ' ' << sizeof(my_char) << '\n';
  long my_long = 1135;
  std::cout << my_long << ' ' << sizeof(my_long) << '\n';

  long long amount;
  std::cout << "A boolean is stored in " << sizeof(bool) << " bytes\n";
  std::cout << "The variable \"amount\" is stored in " << sizeof(long long) << " bytes\n";

  return 0;
}
