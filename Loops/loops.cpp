#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "enter a number" << endl;
    cin >> n;

    // print numbers 1 to N

    int i = 1;
    while(n >= i) {
        cout << i << endl;
        i++;
    }

    // sum of numbers upto n
    int sum = 0;
    while(n > 0){
        sum += n;
        n--;
    }
    cout << sum << endl;

    // sum of all even numbers upto n

    int i = 0;
    int sum2 = 0;
    while(n >= i) {
        sum2 += i;
        i+= 2;
    }
    cout << sum2 << endl;

    // whether a no. is prime or not
    int m = 2;
    while(n-1 >= m) {
        if(n%m == 0){
            cout << "Not prime" << endl;
        } else {
            cout << "prime" << endl;
        }
        m++ ;
    }

    return 0;

}
