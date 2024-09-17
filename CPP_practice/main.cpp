//Created by Nt4H
#include <iostream>


using namespace std;
main(){
  setlocale(LC_ALL, "rus");

  //  /10  cut last num, /100 cut last two num ...exp, %10 get last num
  // https://youtu.be/9TLC4qfFzHQ?list=PLlxYwLnXeoE0qsuXwsUi3zSU6FKOS8YCB&t=115
  //
  //  12  ->  1   :  2
  //  12  /   10  =  1
  //  12  %   10  =  2
  //
  //  2   ->  0   |  2        /   9  ->  0 | 9       /         14 ->  1 | 4)
  //  2   /   10  =  0
  //  2   /   10  =  2
  //
  int userSec;

  int h;
  int m;
  int s;

  cout << "type seconds : ";
  cin >> userSec;

  h = userSec / 3600 % 24;
  m = userSec % 3600 / 60;
  s = userSec % 60;
  cout << h / 10 << h % 10 << ":" << m / 10 << m % 10<< ":" << s / 10 << s % 10 << endl;
 
  cout << endl;
  system("pause");
}