#include <iostream>
using namespace std;

int main() {

    int a ;
    cin >> a;

    if(a > 0) {
        cout << "a is positive" << endl;
    } else if( a == 0){
        cout << "a is zero" << endl;
    } else {
        cout << "a is negative" << endl;
    }

    char ch;
    cout << "Enter a character: " <<endl;
    cin >> ch;

    if(ch >= 97 && ch <= 122){
        cout << "lowercase" <<endl;
    } else if(ch >= 65 && ch <= 90){
        cout << "uppercase" <<endl;
    } else if (ch >= 48 && ch <= 57){
        cout << "numeric" <<endl;
    }

    return 0;
} 
