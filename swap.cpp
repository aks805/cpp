
#include <iostream>

using std::cout;
using std::endl;

void swapStrings1(std::string &one, std::string &two) {
  std::string temp = one;
  one = two;
  two = temp;
}

void swapStrings2(std::string one, std::string two) {
  std::string temp = one;
  one = two;
  two = temp;
}

void swapStrings3(std::string *one, std::string *two) {
  std::string temp = *one;
  *one = *two;
  *two = temp;
}

void swapints1(int &one, int &two) {
  int temp = one;
  one = two;
  two = temp;
}

void swapints2(int one, int two) {
  int temp = one;
  one = two;
  two = temp;
}

void swapints3(int *one, int *two) {
  int temp = *one;
  *one = *two;
  *two = temp;
}

void swapdoubles1(double &one, double &two) {
  double temp = one;
  one = two;
  two = temp;
}

void swapdoubles2(double one, double two) {
  double temp = one;
  one = two;
  two = temp;
}

void swapdoubles3(double *one, double *two) {
  double temp = *one;
  *one = *two;
  *two = temp;
}

void swapchars1(char &one, char &two) {
  char temp = one;
  one = two;
  two = temp;
}

void swapchars2(char one, char two) {
  char temp = one;
  one = two;
  two = temp;
}

void swapchars3(char *one, char *two) {
  char temp = *one;
  *one = *two;
  *two = temp;
}

int main() {

  cout << "----------------------------" << endl;
  cout << "Starting strings test" << endl;
  cout << "Swap Strings 1" << endl;
  std::string stringOne, stringTwo;
  stringOne = "Hello";
  stringTwo = "World";
  cout << "Before swapping: " << stringOne << " " << stringTwo << endl;
  swapStrings1(stringOne, stringTwo);
  cout << "After swapping: " << stringOne << " " << stringTwo << endl;

  cout << endl;
  cout << "Swap Strings 2" << endl;

  std::string string1, string2;
  string1 = "Hello";
  string2 = "World";
  cout << "Before swapping: " << string1 << " " << string2 << endl;
  swapStrings2(string1, string2);
  cout << "After swapping: " << string1 << " " << string2 << endl;

  cout << endl;
  cout << "Swap Strings 3" << endl;

  std::string string10, string20;
  string10 = "Hello";
  string20 = "World";
  cout << "Before swapping: " << string10 << " " << string20 << endl;
  swapStrings3(&string10, &string20);
  cout << "After swapping: " << string10 << " " << string20 << endl;

  /* ------------------------------------------------------------------------------------------------------------------------
   */
  cout << endl;
  cout << "----------------------------" << endl;
  cout << "Starting ints test" << endl;
  cout << endl;

  cout << "Swap ints 1" << endl;
  int intOne, intTwo;
  intOne = 10;
  intTwo = 2;
  cout << "Before swapping: " << intOne << " " << intTwo << endl;
  swapints1(intOne, intTwo);
  cout << "After swapping: " << intOne << " " << intTwo << endl;

  cout << endl;
  cout << "Swap ints 2" << endl;

  int int1, int2;
  int1 = 10;
  int2 = 2;
  cout << "Before swapping: " << int1 << " " << int2 << endl;
  swapints2(int1, int2);
  cout << "After swapping: " << int1 << " " << int2 << endl;

  cout << endl;
  cout << "Swap ints 3" << endl;

  int int10, int20;
  int10 = 10;
  int20 = 2;
  cout << "Before swapping: " << int10 << " " << int20 << endl;
  swapints3(&int10, &int20);
  cout << "After swapping: " << int10 << " " << int20 << endl;

  /* ------------------------------------------------------------------------------------------------------------------------
   */
  cout << endl;
  cout << "----------------------------" << endl;
  cout << "Starting doubles test" << endl;
  cout << endl;

  cout << "Swap doubles 1" << endl;
  double doubleOne, doubleTwo;
  doubleOne = 10;
  doubleTwo = 2;
  cout << "Before swapping: " << doubleOne << " " << doubleTwo << endl;
  swapdoubles1(doubleOne, doubleTwo);
  cout << "After swapping: " << doubleOne << " " << doubleTwo << endl;

  cout << endl;
  cout << "Swap doubles 2" << endl;

  double double1, double2;
  double1 = 10;
  double2 = 2;
  cout << "Before swapping: " << double1 << " " << double2 << endl;
  swapdoubles2(double1, double2);
  cout << "After swapping: " << double1 << " " << double2 << endl;

  cout << endl;
  cout << "Swap doubles 3" << endl;

  double double10, double20;
  double10 = 10;
  double20 = 2;
  cout << "Before swapping: " << double10 << " " << double20 << endl;
  swapdoubles3(&double10, &double20);
  cout << "After swapping: " << double10 << " " << double20 << endl;

  /* ------------------------------------------------------------------------------------------------------------------------
   */
  cout << endl;
  cout << "----------------------------" << endl;
  cout << "Starting chars test" << endl;
  cout << endl;

  cout << "Swap chars 1" << endl;
  char charOne, charTwo;
  charOne = 'a';
  charTwo = 'b';
  cout << "Before swapping: " << charOne << " " << charTwo << endl;
  swapchars1(charOne, charTwo);
  cout << "After swapping: " << charOne << " " << charTwo << endl;

  cout << endl;
  cout << "Swap chars 2" << endl;

  char char1, char2;
  char1 = 'a';
  char2 = 'b';
  cout << "Before swapping: " << char1 << " " << char2 << endl;
  swapchars2(char1, char2);
  cout << "After swapping: " << char1 << " " << char2 << endl;

  cout << endl;
  cout << "Swap chars 3" << endl;

  char char10, char20;
  char10 = 'a';
  char20 = 'b';
  cout << "Before swapping: " << char10 << " " << char20 << endl;
  swapchars3(&char10, &char20);
  cout << "After swapping: " << char10 << " " << char20 << endl;
}
