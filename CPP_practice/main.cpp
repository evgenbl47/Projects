//Created by Nt4H
#include <iostream>


using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  //  /10  cut last num, /100 cut last two num ...exp, %10 get last num
  int userInput;

  cout << "type seconds : ";
  cin >> userInput;

  int sec;
  int min;

  min = userInput / 60 % 60;
  sec = userInput % 60;
 
  cout << "min:" << min << " sec :" << sec;
 
  cout << endl;
  system("pause");
}