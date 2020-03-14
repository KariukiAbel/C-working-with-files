#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {
  fstream file;
  //using the constructor to cteate and open a file
// fstream file ("sample.txt", ios::out | ios::in);

  // fstream default mode (flags) is
  // input output stream aka ios::in | ios::out
  //ios::in stands for INPUT used for reading
  //ios::out stands for OUTPUT used for writing
  //ios::trunc stands for truncate
  // ios::ate stands for At The End sets the ponter to the end of the File
//ios::app appends data at the end of file

  // file.open("sample.txt", ios::out | ios::ate |ios::in);
  file.open("sample.txt", ios::out | ios::app);

  //The line below creates and opens a new file called sample.txt
    // file.open("sample.txt", ios::out | ios::in);
  if (file.is_open()) {
    file <<"sample text\n";
    file <<"sample text\n";
  }else{
    std::cout << "File was not opened properly!" << '\n';
  }
  return 0;
}
