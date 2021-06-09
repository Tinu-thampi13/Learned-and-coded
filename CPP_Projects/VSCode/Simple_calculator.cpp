#include <iostream>

using namespace std;

int main(){

    double num1, num2, result ;
    char op;

    cout<<"Enter num1: ";
    cin >> num1;

    cout<<"Enter operators: ";
    cin >> op;

    cout<<"Enter num2: ";
    cin >> num2;

    if (op == '+'){

        result=num1+num2;  
    }
    else if(op == '-'){

        result=num1-num2;
    }
    else if(op == '*'){

        result=num1*num2;
    }
    else if(op == '/'){

        result=num1/num2;
    }
    else{
        cout<<"Invalid operator" ;
    }
    
    cout<<result;
    return 0;
}