#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;

    int fact=1;
    for(int i=2; i<=n; i++){
        fact=fact*i;
        
    }cout<<fact<<endl;
    return 0;
}