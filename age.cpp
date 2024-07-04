//Program that takes input of age and tells if you are adult or not//

#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "Adult";
    }
    else {
        cout << "Not an Adult";
    }

    return 0;

}
