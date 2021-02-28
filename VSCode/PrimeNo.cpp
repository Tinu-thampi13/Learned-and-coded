#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int i;
        for (i = 2; i < num ; i++)
        {
            if(num%i==0)
            {
                cout<<"Non-Prime number"<<endl;
                break;
            } 
                                                     
        } 
         if(i==num){

            cout<<"prime number"<<endl; 
          }  
        return 0;

}