#include <iostream>

int main() 
{
  //there are different types of variables aka strings, intergers, etc.
  //Declare integers by stating int and naming the variable
  int number = 6;

  //can use math operators
  //+, -, *, /, %
  number = (4*8)%5;

  //can print this way too. 
  std::cout <<"Your number is " <<number <<".\n";

  //you can have the user input thier say too
  //std:cin >> allows you to do this
  std::cout <<"Pick your number: ";
  std::cin >> number;
  std::cout <<"Your number is " <<number <<".\n";

}