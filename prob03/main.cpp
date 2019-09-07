// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main ()
{
  //Create variables to store user inches and store height/inch calculations
  int total_inches;
  int feet;
  int inches;

  //Ask the user for height in inches
  std::cout << "Please enter the person\'s height in inches: ";
  std::cin >> total_inches;

  //Split total inches into feet and inches
  feet = total_inches / 12;
  inches = total_inches % 12;

  //Show the user height in feet and inches. 
  std::cout << "That person is " << feet << "\'" << inches << "\" \n";

  return 0;
}
