#include <iostream>
using namespace std;

// when you think of templates think of generics and also <T>

double avg(int data[], int size) {
  double sum = 0;
  for (int i = 0; i < size;i++) {
    sum += data[i];
  }
  return sum / size;
}

void printBoard(char board[][3], int rows) {
    int cols = 3;
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

// templates
template <typename T, size_t rows, size_t cols>
void printArray(T (data)[rows][cols]){

}

int main() {
  int data[] = { 5,10,15,20 };

  cout << avg(data, 4) << endl;
  // for (int i = 0; i < 4;i++) {
  //   cout << data[i] << endl;
  // }

  // dynamically typing
  // size_t size = sizeof data / sizeof data[0];
  // for (size_t i = 0; i < size; i++){
  //   cout << data[i] << endl;
  // }


  char board[][3] = {
    {'-','-','-'},
    {'-','-','-'},
    {'-','-','-'},
    
  };

  int rows = sizeof board / sizeof board[0];
  int cols = sizeof board[0] / sizeof board[0][0];

  cout << rows << " " << cols << endl;

  board[0][0] = 'x';
  board[0][1] = 'o';
  board[1][0] = 'x';
  board[0][2] = 'o';
  board[2][0] = 'x';

  printBoard(board, 3);

  // cout << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
  // cout << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
  // cout << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;


  return 0;
}