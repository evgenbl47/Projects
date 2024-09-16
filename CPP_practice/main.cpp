#include <iostream>


using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  //  /10  cut last num, %10 get last num
  int userInput;
  int res;

  cout << "Enter number" << endl;
  cin >> userInput;

  //res = userInput % 10;
  //res = res + (userInput = userInput / 10) % 10;
  //res = res + (userInput = userInput / 10) % 10;
  res = (userInput % 10) + ((userInput = userInput / 10) % 10) + ((userInput = userInput / 10) % 10);

  cout << res;
  cout << endl;

 
  cout << endl;
  system("pause");
}