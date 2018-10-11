#include <iostream>
#include <cstdlib>
using namespace std;



int main(){
  int a;
  int b;
  cout << "Enter number of rows and columns:" << endl;
  cin >> a >>  b;
  for (int i = 0; i<a; i++){
    for (int j = 0; j<b; j++){
      cout << "X.";
    }
    cout << endl;
  }

  return 0;
}
