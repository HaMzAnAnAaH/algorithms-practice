#include <iostream>

using namespace std;


void checkPerfectNum(int UserNum1){
    int sumDivisor=0;
    for(int i =1; i <= UserNum1/2; i++){
        if(UserNum1%i == 0){
            sumDivisor += i;
        }
    }
    if(sumDivisor == UserNum1){
        cout << UserNum1 << " is A Perfect Number";

    }else{
        cout << UserNum1 << " is NOT A Perfect Number";
    }
}

int ReadUserNum(){
    int UserNum1; cin >> UserNum1; return UserNum1;
}

int main(){
    
    checkPerfectNum(ReadUserNum());
    
    return 0;
}