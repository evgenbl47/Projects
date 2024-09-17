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
  int res;

  cout << "type seconds : ";
  cin >> userSec;

  res = userSec / 3600 % 24 / 10;
  cout << res;
  res = userSec / 3600 % 24 % 10;
  cout << res << ":";
  res = userSec % 3600 / 60;
  cout << res << ":";
  res = userSec % 60;
  cout << res << "." << endl;
 
  cout << endl;
  system("pause");
}