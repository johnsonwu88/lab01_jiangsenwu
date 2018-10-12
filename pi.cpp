#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int n; //number you input
  double pi;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    do{
      cout << "Enter the value of the parameter 'n' in the Leibniz formula(or -1 to quit):" << endl;
      cin >> n;
      if(n==0){
	cout << "The approximate value of pi using 1 term is: 4.000" << endl;
      }
      if(n>0){
	pi=0;
	for (int x=0;x<=n;x++)
	  pi=pi+(4*(pow(-1,x)/(2*x+1)));
      
	cout << "The approximate value of pi using " << n+1 << " terms is: "<<pi<<endl;
      }
    }
      while(n!=-1);



      return 0;

    }
