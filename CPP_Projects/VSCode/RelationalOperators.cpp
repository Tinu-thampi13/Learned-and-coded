#include<iostream>

using namespace std;

int main(){

    int num;
    cout<< "Enter a number: "<<endl;
    cin>>num;

   if(num>10){
       cout<<"Your No. is greater than 10"<<endl;

   }else if (num<10)
   {
       cout<<"Your No. is smaller than 10"<<endl;

   }else{
        cout<<"Your No. is equal to 10"<<endl;
   }
return 0;
}