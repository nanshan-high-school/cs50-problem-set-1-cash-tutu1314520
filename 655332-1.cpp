#include <iostream>
using namespace std;

int main() {
    int dollar;
    int th,fivehu,hu,fif,ten,five,one;
    do {
        cout << "你想要多少換算多少錢\n";
        cin >> dollar;
        int dollar2 = dollar;
        th = dollar2 / 1000;
        dollar2 -= th * 1000;
        fivehu = dollar2 / 500;
        dollar2 -= fivehu * 500;
        hu = dollar2 / 100;
        dollar2 -= hu * 100;
        fif = dollar2 / 50;
        dollar2 -= fif * 50;
        ten = dollar2 / 10;
        dollar2 -= ten * 10;
        five = dollar2 / 5;
        dollar2 -= five * 5;
        one = dollar2 / 1;
        dollar2 -= one* 1;
        cout << "千元" << th << "張\n";
        cout << "五百元" << fivehu << "張\n";
        cout << "百元" << hu << "張\n";
        cout << "五十元" << fif << "個\n";/*因為位子太少一直換行*/
        cout << "十元" << ten << "個\n";/*因此cout寫多一點較清楚*/
        cout << "五元" << five << "個\n" << "1元" << one << "個\n"; 
        } while (dollar <= 100000);

    cout << "因為輸入超過十萬系統崩潰中";
}// 655332 272班 32 號 杜宸緯
