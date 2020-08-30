#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
   fstream dataFile;
   string data;

   dataFile.open("randomString.txt",ios::in); //open a file to perform read operation using file object
   if (dataFile.is_open()){   //checking whether the file is open
      for(int line = 1; getline(dataFile, data); line++){ //read data from file object and put it into string.
         cout << "Line " << line << " "<< data << "\n"; //print the data of the string
      }
      dataFile.close(); //close the file object.
   }
}