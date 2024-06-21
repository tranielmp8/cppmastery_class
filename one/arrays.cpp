#include <iostream>
using namespace std;

int main() {
  int data[] = {5, 10, 15, 20};
  cout << data[0] << data[1] << data[2] << data[2] << endl;

  data[1] = 7;
  
  for (int i = 0; i < 4; i++) {
    cout << data[i] << endl;
  }

  return 0;
}