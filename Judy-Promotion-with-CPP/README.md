# Judy Promotion 💰

โปรเจกต์นี้คือโปรแกรมภาษา C++ อย่างง่ายสำหรับคำนวณส่วนลดตามยอดซื้อที่ระบุภายใต้โปรโมชั่น "Judy Promotion" ซึ่งมีเงื่อนไขส่วนลดที่แตกต่างกัน.


## คุณสมบัติ ✨

-   **รับยอดซื้อ**: ผู้ใช้สามารถป้อนจำนวนเงินที่ซื้อ.
-   **ตรวจสอบสิทธิ์ส่วนลด**: โปรแกรมจะตรวจสอบว่ายอดซื้อมีสิทธิ์ได้รับส่วนลดหรือไม่ (ยอดซื้อต้องตั้งแต่ 15,000 บาทขึ้นไป).
-   **คำนวณส่วนลดตามช่วง**:
    -   `15,000 - 19,999` บาท: ลด 15%
    -   `20,000 - 29,999` บาท: ลด 20%
    -   `30,000` บาท: ลด 30%
    -   `มากกว่า 30,000` บาท: ลด 50%
-   **แสดงผลส่วนลดและยอดรวมสุทธิ**: แสดงเปอร์เซ็นต์ส่วนลดและยอดเงินที่ต้องชำระหลังหักส่วนลด.

## วิธีการใช้งาน 🚀

โปรแกรมนี้เขียนด้วยภาษา C++ คุณสามารถคอมไพล์และรันได้บนระบบปฏิบัติการส่วนใหญ่ที่มี C++ Compiler.

1.  คอมไพล์โค้ด:
    
    ใช้คอมไพเลอร์ C++ ที่คุณมี (เช่น g++, MinGW, Visual Studio) คอมไพล์ไฟล์ main.cpp (หรือชื่อไฟล์โค้ดของคุณ)
    
    Bash
    
    ```
    g++ main.cpp -o judy_promotion
    
    ```
    
2.  รันโปรแกรม:
    
    หลังจากคอมไพล์สำเร็จ คุณสามารถรันโปรแกรมได้จาก Command Prompt หรือ Terminal.
    
    Bash
    
    ```
    ./judy_promotion
    
    ```
    
    _(สำหรับผู้ใช้ Windows อาจเป็น `judy_promotion.exe`)_
    
3.  ป้อนข้อมูล:
    
    โปรแกรมจะร้องขอให้คุณป้อนยอดซื้อ.
    

## ตัวอย่างการทำงาน 🖥️

นี่คือตัวอย่างบางส่วนของการโต้ตอบกับโปรแกรม:

```
------Judy Promotion------
input your amount = 18000
Amount = 18000.00
You have Discount
Discount 15%
total = 2700.00
-------------

```

```
------Judy Promotion------
input your amount = 25000
Amount = 25000.00
You have Discount
Discount 20%
total = 5000.00
-------------

```

```
------Judy Promotion------
input your amount = 10000
Amount = 10000.00
You Don't have Discount
-------------

```

----------

----------

# Judy Promotion 💰

This project is a simple C++ program designed to calculate discounts based on the purchase amount under the "Judy Promotion" scheme, which features varying discount conditions.

## Features ✨

-   **Purchase Amount Input**: Users can enter their total purchase amount.
-   **Discount Eligibility Check**: The program verifies if the purchase amount qualifies for a discount (amount must be 15,000 THB or more).
-   **Tiered Discount Calculation**:
    -   `15,000 - 19,999` THB: 15% discount
    -   `20,000 - 29,999` THB: 20% discount
    -   `30,000` THB: 30% discount
    -   `Over 30,000` THB: 50% discount
-   **Display Discount and Net Total**: Shows the applied discount percentage and the final amount payable after the discount.

## How to Use 🚀

This program is written in C++. You can compile and run it on most operating systems with a C++ compiler.

1.  Compile the Code:
    
    Use your preferred C++ compiler (e.g., g++, MinGW, Visual Studio) to compile the main.cpp file (or whatever you named your code file).
    
    Bash
    
    ```
    g++ main.cpp -o judy_promotion
    
    ```
    
2.  Run the Program:
    
    After successful compilation, you can run the program from your Command Prompt or Terminal.
    
    Bash
    
    ```
    ./judy_promotion
    
    ```
    
    _(For Windows users, it might be `judy_promotion.exe`)_
    
3.  Enter Data:
    
    The program will prompt you to enter the purchase amount.
    

## Example Usage 🖥️

Here are some examples of interacting with the program:

```
------Judy Promotion------
input your amount = 18000
Amount = 18000.00
You have Discount
Discount 15%
total = 2700.00
-------------

```

```
------Judy Promotion------
input your amount = 25000
Amount = 25000.00
You have Discount
Discount 20%
total = 5000.00
-------------

```

```
------Judy Promotion------
input your amount = 10000
Amount = 10000.00
You Don't have Discount
-------------

```