//Created by Nt4H
#include <iostream>


using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  //  /10  cut last num, /100 cut last two num ...exp, %10 get last num

  int userSec;
  int res;

  cout << "type seconds : ";
  cin >> userSec;

  res = userSec / 3600 % 24;
  cout << "Houer: " << res << endl;
  res = userSec % 3600 / 60;
  cout << "Munutes: " << res << endl;
  res = userSec % 60;
  cout << "Second: " << res << endl;
 
  cout << endl;
  system("pause");
}