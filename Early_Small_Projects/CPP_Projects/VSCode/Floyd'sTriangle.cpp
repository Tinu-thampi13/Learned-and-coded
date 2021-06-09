#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter the Number: "<<endl;
    cin>>num;
     
    int count=1;
    for(int i=1; i<=num; i++){
        for(int j=1; i<=i; j++){
            
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }
    return 0;
}