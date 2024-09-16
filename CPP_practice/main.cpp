#include <iostream>

using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  int first = 0;
  int second = 0;
  int third = 0;
  int tmp = 0;

  cout << "Type any integer : ";
  first = 0;
  //cin >> first;
  cout << "type another number : ";
  second = 1;
  //cin >> second;
  cout << "type third number : " << endl;
  third = 2;
  //cin >> third;

  cout << "You typed : " << first 
  << " - first number," << second 
  << " - second number," << third 
  << " - third number" << endl;

  tmp = third;
  third = second;
  second = first;
  first = tmp;

  cout << "Numbers after slide : " << first 
  << " - first number, " << second 
  << " - second number, " << third 
  << " - third number." << endl;

  tmp = third;
  third = second;
  second = first;
  first = tmp;

  cout << "Numbers after second slide : " << first 
  << " - first number, " << second 
  << " - second number, " << third 
  << " - third number." << endl;

  tmp = third;
  third = second;
  second = first;
  first = tmp;

  cout << "Numbers after third slide : " << first 
  << " - first number, " << second 
  << " - second number, " << third 
  << " - third number." << endl;

  cout << endl;
  system("pause");
} 