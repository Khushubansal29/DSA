#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec;
    vector <int> vec2 = {1 ,2 ,3};
    cout << vec2[0] << endl;

    vector <int> vec3(3,9);
    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;

    vector <char> charVec = {'a', 'b', 'c'};
    for(char i: charVec){
        cout << i << endl; 
    }

    cout << "Size of vector: " << charVec.size() << endl;
    // cout << "Size of vector: " << vec3.size() << endl;
    
    charVec.push_back('d');
    cout << charVec[3] << endl;
    cout << charVec.size() << endl;
    charVec.pop_back();
    cout << charVec.size() << endl;

    cout << charVec.front() << endl;
    cout << charVec.back() << endl;
    cout << charVec.at(1) << endl;

    // size and capacity
    vector <int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    cout << "Size of vector is " << numbers.size() << endl;
    cout << "Capacity of vector is " << numbers.capacity() << endl;

    return 0;

}
