#include <iostream>

using namespace std;

int main(){

    string dayName;
    int dayNum;

    cout << "Enter the Day No. :\n";
    cin>>dayNum;


    switch(dayNum){

        case 0:
            dayName ="SUNDAY" ;
            break;

        case 1:
            dayName ="MONDAY" ;
            break;    

        case 2:
            dayName ="TUESDAY" ;
            break;

        case 3:
            dayName ="WEDNESDAY" ;
            break;

        case 4:
            dayName ="THURSDAY" ;
            break;

        case 5:
            dayName ="FRIDAY" ;
            break;

        case 6:
            dayName ="SATURDAY" ;
            break;  

        default:
            dayName ="Invalid dayNO.";         
    }

    cout << dayName;

    return 0;
}