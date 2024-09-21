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

  int userNum;

  cout << "type num: " ;
  cin >> userNum;

  if (userNum > 0){
    cout << 1;
  } else{
    cout << 0;
  }


  cout << endl;
  system("pause");
}