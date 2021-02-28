#include <iostream>

using namespace std;


int main(){

    int secretNum, guess, isNear;
    secretNum = 13;

    while(guess != secretNum){
        cout <<"Enter next guess: "<<endl;
        cin >> guess;

        isNear= guess-secretNum;

    if(isNear<=10, -10){

        cout<<"Your guess is close\n";

    }
    else if(isNear<=50, -50){

        cout<<"Your guess is not that close\n";
    } 
    else{
        cout<<"Your guess is not at all close\n";
    }
    
    }

cout<<"YOU WIN!!";

return 0;

}