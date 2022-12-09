#include<iostream>
using namespace std;

int main(){
    int number = 1 ;
    int A = 0 , B= 0 ;
    cout << "Enter an integer: ";
    cin >> number ;
    while(number != 0 )
    {
        if(number%2 == 1){
            B++ ;
        }else{
            A++ ;
        }
        cout << "Enter an integer: ";
        cin >> number ;
    }
    cout << "#Even numbers = " << A << endl ;
    cout << "#Odd numbers = " << B;
    return 0;
}
