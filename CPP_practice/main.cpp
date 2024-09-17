//Created by Nt4H
#include <iostream>


using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  //  /10  cut last num, /100 cut last two num ...exp, %10 get last num
  int userInput;
  int res;

  cout << "Enter 4 number" << endl;
  cin >> userInput;

  res = (userInput % 10) + ((userInput / 10) % 10) + ((userInput / 100) % 10)+ ((userInput / 1000) % 10);

  cout << res;
  cout << endl;

 
  cout << endl;
  system("pause");
}