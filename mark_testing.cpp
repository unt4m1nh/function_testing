#include<iostream>
#include<string>

using namespace std;

string gift(float gpa, bool isPoor) {
    string result;
    if (isPoor) {
        if (gpa < 0 || gpa > 4) {
            result = "NHAP SAI INPUT";
        } else if (gpa >= 0 && gpa < 2.4) {
            result = "NHAN 500.000VND";
        } else if (gpa >= 2.4 && gpa < 3.2) {
            result = "NHAN LICH VA 500.000VND";
        } else {
            result = "NHAN GOI QUA VA 500.000VND";
        }
    } else {
        if (gpa < 0 || gpa > 4) {
            result = "NHAP SAI INPUT";
        } else if (gpa >= 0 && gpa < 2.4) {
            result = "KHONG NAM TRONG DIEN NHAN QUA";
        } else if (gpa >= 2.4 && gpa < 3.2) {
            result = "NHAN LICH";
        } else {
            result = "NHAN GOI QUA";
        }
    }
    return result;
}

int main() {
    float gpa;
    bool isPoor;
    cin >> gpa >> isPoor;
    cout << gift(gpa, isPoor);
    return 0;
}
