#include <iostream>
using namespace std;

int main() {
    int dollar;
    do {
        cout << "你想要多少換算多少錢\n";
        cin >> dollar;
        int dollar2 = dollar;
        cout << dollar2 / 1000 << "張千";
        cout << dollar2 % 1000 / 500 << "個五百";
        cout << dollar2 % 1000 % 500 / 100 << "張百";
        cout << dollar2 % 1000 % 500 % 100 / 50 << "個五十";
        cout << dollar2 % 1000 % 500 % 100 % 50 / 10 << "個十";
        cout << dollar2 % 1000 % 500 % 100 % 50 % 10 / 5 << "個五";
        cout << dollar2 % 1000 % 500 % 100 % 50 % 10 % 5 << "個一";
        } while (dollar <= 100000);

    cout << "因為輸入超過十萬系統崩潰中";
}// 655332 272班 32 號 杜宸緯
