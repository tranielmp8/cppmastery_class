#include <iostream>

using namespace std;

int main() {
  bool friendly = false;
  std::cout << friendly <<std::endl;

  char firstInitial = 'C';
  cout << firstInitial << endl;

  signed short s = SHRT_MAX;
  std::cout << s << std::endl;

  signed short m = SHRT_MIN;
  std::cout << m << std::endl;

  unsigned long x2 = ULONG_MAX;
  cout << x2 << endl;

  float weight = 305.5;
  double weightKG = weight * .45359237;
  cout << weight << " " << weightKG << endl;

  float a = 1 / 3.0; //one of the numbers has to be a float number so add a .
  double b = 1 / 3.0; // one has to have the .0
  cout << a << endl;
  cout << b << endl;

  return 0;
}