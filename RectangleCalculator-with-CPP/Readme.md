# RectangleCalculator 📐✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **RectangleCalculator**! 👋 โปรเจกต์นี้คือตัวอย่างโปรแกรม C++ ที่สาธิตการใช้งาน **Class เพื่อคำนวณพื้นที่และเส้นรอบรูปของสี่เหลี่ยมผืนผ้า** 📏 คุณจะได้เรียนรู้วิธีการสร้างอ็อบเจกต์สี่เหลี่ยมผืนผ้า กำหนดความยาวและความกว้าง (พร้อมการตรวจสอบค่า) และคำนวณผลลัพธ์ที่สำคัญ.

### คุณสมบัติหลัก 🌟

* **สร้างอ็อบเจกต์สี่เหลี่ยมผืนผ้า**: สามารถสร้าง `Rectangle` อ็อบเจกต์พร้อมกำหนดความยาวและความกว้างได้.
* **ตรวจสอบค่าอินพุต**: มีการตรวจสอบว่าความยาวและความกว้างที่ป้อนเข้ามาต้องไม่เป็นค่าติดลบ.
* **คำนวณพื้นที่**: คำนวณและคืนค่าพื้นที่ของสี่เหลี่ยมผืนผ้า.
* **คำนวณเส้นรอบรูป**: คำนวณและคืนค่าเส้นรอบรูปของสี่เหลี่ยมผืนผ้า.
* **รองรับหลายรายการ**: โปรแกรมสามารถรับและแสดงผลการคำนวณของสี่เหลี่ยมผืนผ้าหลายรูปได้พร้อมกัน (ตามจำนวนที่กำหนด).

### โครงสร้างโค้ดโดยย่อ 🧑‍💻

โปรเจกต์นี้ประกอบด้วย `class Rectangle` ซึ่งมีสมาชิกและเมธอดดังนี้:

* **Private Members**: `length` (ความยาว) และ `width` (ความกว้าง).
* **Constructors**:
    * `Rectangle()`: Constructor เริ่มต้น.
    * `Rectangle(double l, double w)`: Constructor สำหรับกำหนดความยาวและความกว้าง.
* **Public Methods**:
    * `setLength(double l)`: สำหรับกำหนดความยาว (พร้อมตรวจสอบค่า).
    * `setWidth(double w)`: สำหรับกำหนดความกว้าง (พร้อมตรวจสอบค่า).
    * `getLength()`: สำหรับดึงค่าความยาว.
    * `getWidth()`: สำหรับดึงค่าความกว้าง.
    * `calculateArea()`: คำนวณพื้นที่.
    * `calculatePerimeter()`: คำนวณเส้นรอบรูป.

ตัวอย่างการใช้งานใน `main()`:

```cpp
// สร้างอาร์เรย์ของอ็อบเจกต์ Rectangle
const int num = 2;
Rectangle rect[num];

// ลูปรับข้อมูลและคำนวณ
for (int i = 0; i < num; i++){
  // ... รับค่า length และ width จากผู้ใช้
  rect[i].setLength(l);
  rect[i].setWidth(w);
}

// ลูปแสดงผลลัพธ์
for (int i = 0; i < num; i++){
  cout << "Length: " << rect[i].getLength() << endl;
  cout << "Width: " << rect[i].getWidth() << endl;
  cout << "Area: " << rect[i].calculateArea() << endl;
  cout << "Perimeter: " << rect[i].calculatePerimeter() << endl;
}

```

### วิธีการคอมไพล์และรัน 🚀

1.  **บันทึกโค้ด**: บันทึกโค้ดด้านบนในชื่อไฟล์ `Rectangle.cpp`.
2.  **คอมไพล์**: เปิด Terminal หรือ Command Prompt แล้วใช้คอมไพเลอร์ C++ (เช่น g++):
    
    Bash
    
    ```
    g++ Rectangle.cpp -o rectangle_calculator
    
    ```
    
3.  **รัน**:
    
    Bash
    
    ```
    ./rectangle_calculator
    
    ```
    
4.  **ป้อนค่า**: ทำตามคำแนะนำบนหน้าจอเพื่อป้อนความยาวและความกว้างสำหรับสี่เหลี่ยมผืนผ้าแต่ละรูป.

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ เช่น การคำนวณรูปทรงเรขาคณิตอื่นๆ, การจัดเก็บข้อมูลลงไฟล์, หรือการเพิ่ม GUI ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **RectangleCalculator**! 👋 This project is a simple C++ program that demonstrates the use of a **Class to calculate the area and perimeter of a rectangle** 📏. You'll learn how to create rectangle objects, set their length and width (with validation), and compute essential results.

### Key Features 🌟

-   **Rectangle Object Creation**: Create new `Rectangle` objects and set their length and width.
-   **Input Validation**: Includes validation to ensure that the entered length and width are non-negative.
-   **Area Calculation**: Calculates and returns the area of the rectangle.
-   **Perimeter Calculation**: Calculates and returns the perimeter of the rectangle.
-   **Multiple Entries Support**: The program can accept input for and display calculations for multiple rectangles (based on a defined count).

### Code Structure Overview 🧑‍💻

This project consists of a `Rectangle` class, which includes the following members and methods:

-   **Private Members**: `length` and `width`.
-   **Constructors**:
    -   `Rectangle()`: Default constructor.
    -   `Rectangle(double l, double w)`: Constructor for setting length and width.
-   **Public Methods**:
    -   `setLength(double l)`: For setting the length (with validation).
    -   `setWidth(double w)`: For setting the width (with validation).
    -   `getLength()`: For retrieving the length.
    -   `getWidth()`: For retrieving the width.
    -   `calculateArea()`: Calculates the area.
    -   `calculatePerimeter()`: Calculates the perimeter.

Example usage in `main()`:

C++

```
// Create an array of Rectangle objects
const int num = 2;
Rectangle rect[num];

// Loop for input and calculation
for (int i = 0; i < num; i++){
  // ... Get length and width from the user
  rect[i].setLength(l);
  rect[i].setWidth(w);
}

// Loop for displaying results
for (int i = 0; i < num; i++){
  cout << "Length: " << rect[i].getLength() << endl;
  cout << "Width: " << rect[i].getWidth() << endl;
  cout << "Area: " << rect[i].calculateArea() << endl;
  cout << "Perimeter: " << rect[i].calculatePerimeter() << endl;
}

```

### How to Compile and Run 🚀

1.  **Save the Code**: Save the code above as `Rectangle.cpp`.
2.  **Compile**: Open your Terminal or Command Prompt and use a C++ compiler (e.g., g++):
    
    Bash
    
    ```
    g++ Rectangle.cpp -o rectangle_calculator
    
    ```
    
3.  **Run**:
    
    Bash
    
    ```
    ./rectangle_calculator
    
    ```
    
4.  **Input Values**: Follow the on-screen prompts to enter the length and width for each rectangle.

### Contribution 🤝

This project is intended for learning and demonstration purposes. If you have suggestions for code improvements or wish to add new features like calculating other geometric shapes, saving data to a file, or adding a GUI, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)