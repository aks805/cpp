#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int b = 40;

  cout << "/*----------------------------*/" << endl;
  cout << "Initial State:" << endl;
  cout << "A: " << a << " B: " << b << "\n" << endl;

  a = b;
  cout << "a = b;" << endl;
  cout << "A: " << a << " B: " << b << "\n" << endl;
  b = a;
  cout << "b = a;" << endl;
  cout << "A: " << a << " B: " << b << "\n" << endl;

  int c = a + b;
  cout << "int c = a + b;" << endl;
  cout << "A: " << a << " B: " << b << " C: " << c << "\n" << endl;

  cout << "Invalid operations: " << "a + b = 42;" << "\n" << endl;

  cout << "/*----------------------------*/" << endl;

  int i = 20;
  int *p = &i;

  cout << "int i = 20; \nint *p = &i;" << endl;
  cout << "i: " << i << " p: " << p << " *p: " << *p << "\n" << endl;

  cout << "Invalid operations: " << "int *p1 = &43;" << "\n" << endl;

  cout << "/*----------------------------*/" << endl;

  int j = 69;
  int &ref = j;
  cout << "int j = 69; \nint &ref = j;" << endl;
  cout << "j: " << j << " ref: " << ref << "\n" << endl;

  ref = 10;
  cout << "ref = 10; " << endl;
  cout << "j: " << j << " ref: " << ref << "\n" << endl;

  cout << "Invalid operations: " << " int &&refref = i; " << "\n" << endl;

  int &&refref = 90;
  cout << "int &&refref = 90; " << endl;
  cout << "refref: " << refref << "\n" << endl;
  refref = 10;
  cout << "refref = 10; " << endl;
  cout << "refref: " << refref << "\n" << endl;
}
