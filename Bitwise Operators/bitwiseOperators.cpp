#include <iostream>
using namespace std;

int main(){

    // int a = 4;
    // int b = 6;

    // cout << "a&b " << (a&b) << endl;
    // cout << "a|b " << (a|b) << endl;
    // cout << "~a " << (~a) << endl;
    // cout << "a^b " << (a^b) << endl;


    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;
    // cout << (19 << 1) << endl;
    // cout << (21 << 2) << endl;

    // increement & decreement operators

    int i = 7;
    cout << (++i) << endl; // i = 8; 8
    cout << (i++) << endl; // 8, i = 9
    cout << (i--) << endl; // 9, i = 8
    cout << (--i) << endl; // 7, i = 7

    // int a, b = 1;
    // a = 10;
    // if(++a)
    //     cout << b;
    // else
    //     cout << ++b ;

    // int a = 1;
    // int b = 2;

    // if(a-- > 0 && ++b > 2){
    //     cout << "Stage 1 - Inside If ";
    // } else {
    //     cout << "Stage 2 - Inside else" ;
    // }

    // cout << a << " " << b << endl;
    // a-- == 1, a= 0, ++b = 3, b = 3
    //  if(true): Stage 1 - inside if
    //  0 3

    // int number = 3;
    // cout << (25 * (++number) );
    // ++number = 4, ans = 25* 4 = 100 

    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout << b << endl;
    // cout << c << endl;
    // cout << a << endl;
    // a = 1, b = 1, a = 2, c = 3, a = 3
    // 1 
    // 3
    // 4

    return 0;

}
