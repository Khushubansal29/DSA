#include <iostream>
using namespace std;

int main() {

    // ****
    // ****
    // ****
    // ****

    int n;
    cout << "Enter a number n: " << "";
    cin>> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            // cout << '*' << "" ;
        }
        // cout << endl; 
    }

    //  1 1 1
    //  2 2 2 
    //  3 3 3 

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            // cout << i << " ";
        }
        // cout << endl;
    }

    //  1 2 3 4
    //  1 2 3 4
    //  1 2 3 4
    //  1 2 3 4

    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){
            // cout << j << " ";
        }
        // cout << endl;
    }

    // 3 2 1
    // 3 2 1
    // 3 2 1

    for(int i = 1; i<= n; i++){
        for(int j = n; j >= 1; j--){
            // cout << j << " ";
        }
        // cout << endl;
    }

    // 1 2 3
    // 4 5 6
    // 7 8 9

    for(int i = 1; i <= n*n; i += n){
        for(int j = i; j < i+n; j++){
            // cout << j << " ";
        }
        // cout << endl;
    }

    // *
    // ** 
    // ***
    // ****

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            // cout << '*' << " ";
        }
        // cout << endl;
    }

    // 1
    // 2 2
    // 3 3 3 
    // 4 4 4 4

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            // cout << i << " ";
        }
        // cout << endl;
    }

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    for(int i = 1; i <= n; i++){
        int value = i;
        for(int j = 1; j <= i; j++){
            // cout << value << " ";
            value++;
        }
        // cout << endl;
    }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            // cout << j << " ";
        }
        // cout << endl;
    }

    // A A A
    // B B B
    // C C C
    for(int i = 1; i <= n; i++){
        for(int j= 1; j <= n; j++){
            // cout << char('A' + i - 1) << " ";
        }
        // cout << endl;
    }

    // A B C
    // A B C
    // A B C

    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){
            // cout << char(64 + j) <<" ";
        }
        // cout << endl;
    }

    // A B C
    // D E F
    // G H I

    for(int i = 1; i <= n*n; i += n){
        for(int j = i; j < i + n; j++){
            // cout << char('A' + j - 1) << " ";
        }
        // cout << endl;
    }

    // A B C
    // B C D
    // C D E

    for(int i = 1; i  <= n; i++){
        for(int j = 1; j <= n; j++){
            // cout << char('A' + i + j - 2 ) << " ";
        }
        // cout << endl;
    }

    // A
    // B B
    // C C C
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            // cout << char('A' + i - 1) << " ";
        }
        // cout << endl;
    }

    // A
    // B C
    // C D E 
    // D E F G 
     
    // D
    // C D
    // B C D
    // A B C D
    for(int i = n; i>= 1; i--){
        for(int j = 1; j <= n + 1 - i; j++){
            // cout << char('A' + i + j - 2) << " "; 
        }
        // cout << endl;
    }

    //  . . . *
    //  . . * *
    //  . * * *
    //  * * * *

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            // cout << "." << " ";
        }
        for(int k = 1; k <= i; k++){
            // cout << "*" << " ";
        }

        // cout << endl;

    }

    //  * * * *
    //  * * * .
    //  * * . .
    //  * . . . 

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n - i + 1; j++){
            // cout << "*" << " ";
        }
        for(int k = 1; k <= i - 1; k++){
            // cout << "." << " ";
        }

        // cout << endl;

    }

    //  * * * *
    //  . * * *
    //  . . * *
    //  . . . *

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i - 1; j++){
            // cout << " " << " ";
        }
        for(int k = 1; k <= n - i + 1; k++){
            // cout << "*" << " ";
        }

        // cout << endl;

    }

    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i - 1; j++){
            // cout << " "<< " ";
        }
        for(int k = 1; k <= n - i + 1; k++){
            // cout << i << " ";
        }

        // cout << endl;
    }

    // . . . 1 . . .
    // . . 1 2 1 . .
    // . 1 2 3 2 1 .
    //  1 2 3 4 3 2 1

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            // cout << "." << " ";
        }
        for(int k = 1; k <= i; k++){
            // cout << k << " ";
        }
        for(int l = i - 1; l >= 1; l--){
            // cout << l << " ";
        }
        for(int x = 1; x <= n - i; x++){
            // cout << "." << " ";
        }

        // cout << endl;
    }


    return 0;

}
