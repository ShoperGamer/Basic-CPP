# SimpleSort ✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **SimpleSort**! 👋 โปรเจกต์นี้เป็นตัวอย่างโปรแกรม C++ ที่เรียบง่ายสำหรับ **การเรียงลำดับตัวเลข** 🔢 ที่ผู้ใช้ป้อนเข้ามา คุณสามารถป้อนตัวเลขได้หลายตัว และโปรแกรมจะแสดงผลลัพธ์ทั้งการเรียงลำดับจากน้อยไปมากและจากมากไปน้อย

### คุณสมบัติ 🌟

* **รับอินพุตตัวเลข**: ผู้ใช้สามารถป้อนตัวเลขได้ไม่จำกัดจำนวน (สูงสุด 9999 ตัว) จนกว่าจะป้อน `0` เพื่อหยุด.
* **แสดงผลก่อนเรียง**: แสดงลำดับตัวเลขที่ผู้ใช้ป้อนเข้ามาในตอนแรก.
* **เรียงจากน้อยไปมาก**: จัดเรียงตัวเลขจากค่าน้อยที่สุดไปยังค่ามากที่สุด.
* **เรียงจากมากไปน้อย**: จัดเรียงตัวเลขจากค่ามากที่สุดไปยังค่าน้อยที่สุด.

### วิธีการใช้งาน 🚀

1.  **คอมไพล์โค้ด**: ใช้คอมไพเลอร์ C++ เช่น g++:
    ```bash
    g++ main.cpp -o simplesort
    ```
    (สมมติว่าโค้ดของคุณอยู่ในไฟล์ `main.cpp`)
2.  **รันโปรแกรม**:
    ```bash
    ./simplesort
    ```
3.  **ป้อนตัวเลข**: ทำตามคำแนะนำบนหน้าจอเพื่อป้อนตัวเลขทีละตัว เมื่อต้องการหยุด ให้ป้อน `0`.

### โค้ดโดยย่อ 🧑‍💻

โปรเจกต์นี้สาธิตการใช้งาน **Bubble Sort** ซึ่งเป็นอัลกอริทึมการเรียงลำดับแบบง่าย โดยมีฟังก์ชัน `minnum` สำหรับเรียงจากน้อยไปมาก และ `maxnum` สำหรับเรียงจากมากไปน้อย.

```cpp
// ส่วนหนึ่งของโค้ดหลัก
// ...
void maxnum(int arr[], int size); // ฟังก์ชันเรียงจากมากไปน้อย
void minnum(int arr[], int size); // ฟังก์ชันเรียงจากน้อยไปมาก
// ...

```

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้ หากคุณมีข้อเสนอแนะในการปรับปรุง หรือต้องการเพิ่มฟังก์ชันการเรียงลำดับอื่นๆ ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **SimpleSort**! 👋 This is a straightforward C++ program designed for **sorting numbers** 🔢 entered by the user. You can input multiple numbers, and the program will display them sorted in both ascending and descending order.

### Features 🌟

-   **Numeric Input**: Users can enter an unlimited number of integers (up to 9999) until `0` is entered to stop.
-   **Pre-Sort Display**: Shows the numbers exactly as they were entered by the user.
-   **Ascending Order**: Sorts the numbers from the smallest to the largest value.
-   **Descending Order**: Sorts the numbers from the largest to the smallest value.

### How to Use 🚀

1.  **Compile the code**: Use a C++ compiler like g++:
    
    Bash
    
    ```
    g++ main.cpp -o simplesort
    
    ```
    
    (Assuming your code is in `main.cpp`)
2.  **Run the program**:
    
    Bash
    
    ```
    ./simplesort
    
    ```
    
3.  **Enter numbers**: Follow the on-screen prompts to input numbers one by one. Enter `0` when you are done.

### Code Overview 🧑‍💻

This project demonstrates the **Bubble Sort** algorithm, a simple sorting method. It includes `minnum` for ascending order and `maxnum` for descending order.

C++

```
// Part of the main code
// ...
void maxnum(int arr[], int size); // Function to sort in descending order
void minnum(int arr[], int size); // Function to sort in ascending order
// ...

```

### Contribution 🤝

This project is intended for learning purposes. If you have suggestions for improvements or wish to add other sorting functionalities, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)