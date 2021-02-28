#include <iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    int r;

    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<"Enter r: "<<endl;
    cin>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

return 0;
}