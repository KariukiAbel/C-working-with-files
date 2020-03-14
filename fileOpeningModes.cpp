#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {
  fstream file;
  // fstream default mode (flags) is
  // input output stream aka ios::in | ios::out
  //ios::in stands for INPUT used for reading
  //ios::out stands for OUTPUT used for writing

  file.open("sample.txt", ios::out | ios::ate |ios::in);
  if (file.is_open()) {
  }else{
    std::cout << "File was not opened properly!" << '\n';
  }
  return 0;
}
