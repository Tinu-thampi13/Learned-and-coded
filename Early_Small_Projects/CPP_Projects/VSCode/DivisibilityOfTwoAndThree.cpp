#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a No :"<<endl;
    cin>>num;

    if(num%2==0 && num%3==0){
        cout<<"Your no. is Divisible by 2 & 3 both"<<endl;

    }else if(num%3==0){
        cout<<"Your no. is Divisible by 3"<<endl;

    }else if(num%2==0){
        cout<<"Your no. is Divisible by 2 "<<endl;

    }else{
        cout<<"Your no. is not Divisible by 2 or 3"<<endl;

    }
return 0;

}