#include <iostream>
#include <cstdlib>
using namespace std;



int main(){
  int rows;
  int columns;
  do{
    cout << "Enter number of rows and columns:" << endl;
    cin >> rows >> columns;
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<columns; j++){
          cout << "X.";
	}
	cout << endl;}
  }
  while (rows!=0 and columns!=0);
}
