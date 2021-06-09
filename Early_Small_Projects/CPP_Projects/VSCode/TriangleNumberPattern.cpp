#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    
    cin>>num;
    int i;
    for ( i =1; i <=num; i++){
        for(int j=i; j>=1; j--){
            cout<<i<< " ";
            
        }
        cout<<endl;
        }
        
    
    return 0;
}