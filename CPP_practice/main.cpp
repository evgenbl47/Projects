#include <iostream>

using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  int num1 = 0;
  int num2 = 0;
  int tmp = 0;

  cout << "Enter two numbers : ";
  cin >> num1 >> num2;

  cout << "Before reverse : " << num1 << " - num1, " << num2 << " - num2" << endl;
  tmp = num1;
  num1 = num2;
  num2 = tmp;
  cout << "After reverse : " << num1 << " - num1, " << num2 << " - num2";


  cout << endl;
  system("pause");
} 