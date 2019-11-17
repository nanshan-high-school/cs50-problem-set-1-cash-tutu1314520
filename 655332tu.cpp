#include <iostream>
using namespace std;

int main() {
    int dollar;
    int th,fivehu,hu,fif,ten,five,one;
    do {
        cout << "你想要多少換算多少錢\n";
        cin >> dollar;
        th = dollar / 1000;
        dollar -= th * 1000;
        fivehu = dollar / 500;
        dollar -= fivehu * 500;
        hu = dollar / 100;
        dollar -= hu * 100;
        fif = dollar / 50;
        dollar -= fif * 50;
        ten = dollar / 10;
        dollar -= ten * 10;
        five = dollar / 5;
        dollar -= five * 5;
        one = dollar / 1;
        dollar -= one* 1;
        cout << "千元" << th << "張\n";
        cout << "五百元" << fivehu << "張\n";
        cout << "百元" << hu << "張\n";
        cout << "五十元" << fif << "個\n";/*因為位子太少一直換行*/
        cout << "十元" << ten << "個\n";/*因此cout寫多一點較清楚*/
        cout << "五元" << five << "個\n" << "1元" << one << "個\n"; 
    } while (dollar < 10000);
    cout << "輸入錯誤搂";
}// 655332 272班 32 號 杜宸緯
