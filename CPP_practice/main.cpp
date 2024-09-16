#include <iostream>

//gramm to kilogramm

using namespace std;
main(){
  setlocale(LC_ALL, "rus");


  //int tmp = 0;
  int gramm;
  int kilogramm;
  int diff = 1000;

  cout << "Enter mass in gramm" << endl;
  cin >> gramm;

  kilogramm = gramm / diff;
  gramm = gramm -(kilogramm * 1000);

  cout << "Your weight = " << kilogramm << " kilogramm, and " << gramm << "g.";



  cout << endl;
  system("pause");
} 