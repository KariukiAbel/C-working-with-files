#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  //creating a fstream object
  fstream myFileHandler;
  myFileHandler.open("test.txt");
  if(myFileHandler.is_open()){
    std::cout << "The file has been opened properly" << '\n';
      myFileHandler<<"This is a sample text";
      myFileHandler.close();
    }
  return 0;
}
