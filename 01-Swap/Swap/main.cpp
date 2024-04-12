//
//  main.cpp
//  Swap
//
//  Created by Le Xuan Quynh on 12/4/24.
//

#include <iostream>

void swap(int a, int b);
void trueSwap(int &a, int &b);

int main(int argc, const char * argv[]) {
    // demo tráo đổi 2 số nhưng có lỗi do dùng tham số
//    int a = 5;
//    int b = 10;
//    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
//    swap(a, b);
//    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

   // demo tráo đổi 2 số đúng
    int c = 5;
    int d = 10;

    std::cout << "Before swap: c = " << c << ", d = " << d << std::endl;
    trueSwap(c, d);
    std::cout << "After swap: c = " << c << ", d = " << d << std::endl;

    return 0;
}

// hàm tráo đổi 2 số nhưng có lỗi do dùng tham số
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Hàm tráo đổi đúng
void trueSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Giải thích:
// Khi truyền tham số vào hàm swap, hàm sẽ tạo ra một bản sao của tham số truyền vào.
// Khi thay đổi giá trị của tham số trong hàm, thì giá trị của tham số ngoài hàm không thay đổi.
// Để tráo đổi 2 số, ta cần truyền tham chiếu vào hàm, khi đó giá trị của tham số ngoài hàm sẽ thay đổi.
// Đó chính là lý do khi tráo đổi 2 số bằng hàm swap, giá trị của a và b không thay đổi.

// Còn với hàm trueSwap, ta truyền tham chiếu vào hàm, khi đó giá trị của tham số ngoài hàm sẽ thay đổi.
// Đó chính là lý do khi tráo đổi 2 số bằng hàm trueSwap, giá trị của c và d thay đổi.

// Sự khác nhau giữa tham chiếu và tham số:
// - Tham số: tạo ra một bản sao của tham số truyền vào.
// - Tham chiếu: tham chiếu đến vùng nhớ của tham số truyền vào.

// Kết luận:
// - Để tráo đổi 2 số, ta cần truyền tham chiếu vào hàm.
// - Tham chiếu giúp truyền tham số vào hàm mà không tạo ra bản sao của tham số.
// - Tham chiếu giúp thay đổi giá trị của tham số ngoài hàm.
