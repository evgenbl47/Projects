#include <iostream>

using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  int sum = 0;
  for(int i = 0; i < 10; i++){
    sum += 1;
  }

  cout << "Hello World" << endl;
  cout << "sum:" << sum << endl;


  system("pause");

}