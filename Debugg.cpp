#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;
    int c = a / b;   // lỗi chia cho 0
    cout << "Kết quả: " << c << endl;
    return 0;
}
