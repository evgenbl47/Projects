//Created by Nt4H
#include <iostream>

//     ==
//     !=
//     >
//      <
//     >=
//     <==


using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  int x = 5;
  int userNum;

  cout << "type num: " ;
  cin >> userNum;

  if (userNum == 5){
    cout << "num is 5";
  }

  if (userNum > 5){
    cout << "num is more than 5";
  }

  if (userNum < 5){
    cout << "num is less than 5";
  }

  cout << endl;
  system("pause");
}