 ### Giải thích:
Khi truyền tham số vào hàm swap, hàm sẽ tạo ra một bản sao của tham số truyền vào.
Khi thay đổi giá trị của tham số trong hàm, thì giá trị của tham số ngoài hàm không thay đổi.
```cpp
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
```
Đó chính là lý do khi tráo đổi 2 số bằng hàm swap, giá trị của a và b không thay đổi.

Còn với hàm trueSwap, ta truyền tham chiếu vào hàm, khi đó giá trị của tham số ngoài hàm sẽ thay đổi.
```cpp
void trueSwap(int &c, int &d) {
    int temp = c;
    c = d;
    d = temp;
}
```

Đó chính là lý do khi tráo đổi 2 số bằng hàm trueSwap, giá trị của c và d thay đổi.

Sự khác nhau giữa tham chiếu và tham số:
- Tham số: tạo ra một bản sao của tham số truyền vào.
- Tham chiếu: tham chiếu đến vùng nhớ của tham số truyền vào.

Kết luận:
- Để tráo đổi 2 số, ta cần truyền tham chiếu vào hàm.
- Tham chiếu giúp truyền tham số vào hàm mà không tạo ra bản sao của tham số.
- Tham chiếu giúp thay đổi giá trị của tham số ngoài hàm.
