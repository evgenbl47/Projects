#include <iostream>



using namespace std;
main(){
  setlocale(LC_ALL, "rus");


  int sqare = 3;  //3 X 3
  int userInput;

  cout << "Enter number" << endl;
  cin >> userInput;

  int entire = userInput / sqare;
  int remain = userInput - entire;

  cout << "You can get " << entire << "." << remain << endl;

 
  cout << endl;
  system("pause");
}