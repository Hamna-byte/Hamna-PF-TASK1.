#include <iostream>
using namespace std;
int main() {
    int numb1, numb2;
    cout << "ENTER THE VALUE:" << endl;
    cin >> numb1;
    cin >> numb2;
    int add = numb1 + numb2;
    cout << "ADDITION OF THE VALUE IS:" << add << endl;
    int sub = numb1 - numb2;
    cout << "SUBSTRUCTION OF THE VALUE IS:" << sub << endl;
    int mul = numb1 * numb2;
    cout << "MULTIPLICATION OF THE VALUE IS:" << mul << endl;
    int divide = numb1 / numb2;
    cout << "DIVISION OF THE VALUE IS:" << divide << endl;
    int per = (numb1 / numb2) * 100;
    cout << "THE PERCENTAGE OF THE VALUE IS:" << per << endl;
    return 0;
}