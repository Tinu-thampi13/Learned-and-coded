#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = false;
if(isMale && isTall){
    cout << "You are a tall male"<< endl;
    
}
else if (isMale && !isTall){
    cout<<"You are a short male"<<endl;

}
else if(!isMale && isTall){
    cout<<"You are a tall female"<<endl;

}
else {
    cout<<"You are a short female"<<endl;
}
return 0;

}