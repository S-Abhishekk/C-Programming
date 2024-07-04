/*School has grading system:
Below 25 - F
25 to 44 - E
45 to 49 - D
50 to 59 - C
60 to 79 - B
80 to 100 - A*/
#include<iostream>
using namespace std;
int main () {
    int marks;
    cin >> marks;
    if(marks < 25) {
        cout << "Grade receiced is: F";
    }
    else if(marks >= 25 && marks <= 44) {
        cout << "The grade received is: E";

    }
    else if (marks >= 45 && marks <= 49) {
        cout << "The grade received is: D";

    }
    else if (marks >= 50 && marks <= 59) {
        cout << "The grade received is: C";
    }
    else if (marks >= 60 && marks <= 79) {
        cout << "The grade received is: B";
    }
    else if (marks >= 70 && marks <= 100) {
        cout << "The grade received is: A";
    }
    return 0;
}