#include <iostream>

using namespace std;


template<typename T>
T RequestNGet(const string &request, T min, T max) {
    T x;
    cout << request << endl;
    while ((cin >> x).fail()
           || cin.peek() != '\n'
           || x < min || x > max) {
        cin.clear();
        cin.ignore(256, '\n');
        cout << request << endl;
           }
    return x;
}

int main() {
    const int choice = RequestNGet<int>("Enter a number between 1 and 10:", 1, 10);
    cout << "Your choice is: " << choice << endl;
}
