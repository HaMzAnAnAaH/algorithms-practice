#include <iostream>
using namespace std;

int main() {
    cout << "\t Multiplication table: \n" << endl;
    int x,y,result=0;
  cout << "\t";
  for(x=1;x<=10;x++){
      cout << "|  \t" << x ;
  }
  cout << "\n----------------------------------------------------------------------------------------------------------\n";
  
    for(y=1;y<=10;y++){
        cout << y << "\t|";
        for(x=1;x<=10;x++){
            result = x * y;
            cout << " \t " << result;
        }
        cout << "\n";
    }
    return 0;
}
