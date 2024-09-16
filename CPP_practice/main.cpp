#include <iostream>

//gramm to kilogramm

using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  //int tmp = 0;
  int aSide;
  int bSide;
  int res;
  int sqare = 5;

  cout << "Enter a side" << endl;
  cin >> aSide;
  cout << "Enter a side" << endl;
  cin >> aSide;

  aSide = aSide / sqare;
  bSide = bSide / sqare;
  res = aSide * bSide;

  cout << "You can cut " << res << " sqare";


  cout << endl;
  system("pause");
} 