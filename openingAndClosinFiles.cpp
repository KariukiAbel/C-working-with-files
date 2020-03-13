#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  //creating a fstream object
  fstream myFileHandler;
  myFileHandler.open("test.txt");
  myFileHandler<<"This is a sample text";
  myFileHandler.close();
  return 0;
}
