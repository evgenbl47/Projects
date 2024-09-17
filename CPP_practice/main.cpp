//Created by Nt4H
#include <iostream>


using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  //  /10  cut last num, /100 cut last two num ...exp, %10 get last num
  int res;

  int num1;
  int num2;
  int num3;

  cout << "type 1 number" << endl;
  cin >> num1;

  cout << "type 2 number" << endl;
  cin >> num2;

  cout << "type 3 number" << endl;
  cin >> num3;

  res = num1 * 100 + num2 * 10 + num3;

  cout << res;
 
  cout << endl;
  system("pause");
}