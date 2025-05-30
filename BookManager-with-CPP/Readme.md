

# BookManager 📚✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **BookManager**! 👋 โปรเจกต์นี้คือตัวอย่างโปรแกรม C++ ที่สาธิตการใช้งาน **Class เพื่อจัดการข้อมูลหนังสือ** 📖 คุณจะได้เห็นวิธีการสร้างอ็อบเจกต์หนังสือ กำหนดคุณสมบัติ เช่น ชื่อเรื่อง ผู้แต่ง ISBN และ ราคา รวมถึงการแสดงผลข้อมูลเหล่านั้น

### คุณสมบัติหลัก 🌟

* **สร้างอ็อบเจกต์หนังสือ**: สามารถสร้าง `Book` อ็อบเจกต์ใหม่พร้อมกำหนดชื่อเรื่อง ผู้แต่ง และ ISBN ได้ตั้งแต่เริ่มต้น
* **กำหนดราคา**: สามารถตั้งค่าราคาของหนังสือได้ โดยมีการตรวจสอบว่าราคาต้องไม่ติดลบ
* **ดูข้อมูลหนังสือ**: แสดงรายละเอียดทั้งหมดของหนังสือ รวมถึงชื่อเรื่อง ผู้แต่ง ISBN และราคา

### โครงสร้างโค้ดโดยย่อ 🧑‍💻

โปรเจกต์นี้ประกอบด้วย `class Book` ซึ่งมีสมาชิกดังนี้:

* **Private Members**: `title` (ชื่อเรื่อง), `author` (ผู้แต่ง), `isbn` (รหัส ISBN) และ `price` (ราคา)
* **Constructor**: `Book(string t, string a, string i)` ใช้สำหรับเริ่มต้นค่าคุณสมบัติของหนังสือ
* **Public Methods**:
    * `setPrice(double p)`: สำหรับกำหนดราคาหนังสือ
    * `getPrice()`: สำหรับดึงค่าราคาหนังสือ
    * `displayBookInfo()`: สำหรับแสดงข้อมูลรายละเอียดของหนังสือทั้งหมด

ตัวอย่างการใช้งานใน `main()`:

```cpp
// สร้างหนังสือเล่มแรก
Book book1("Algorithms", "Thomas H. Cormen", "978-0262033848"); //
book1.setPrice(750.50); //
book1.displayBookInfo(); //

// สร้างหนังสือเล่มที่สอง
Book book2("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "978-0345391803"); //
book2.setPrice(350.00); //
book2.displayBookInfo(); //

```

### วิธีการคอมไพล์และรัน 🚀

1.  **บันทึกโค้ด**: บันทึกโค้ดด้านบนในชื่อไฟล์ `Book.cpp`.
2.  **คอมไพล์**: เปิด Terminal หรือ Command Prompt แล้วใช้คอมไพเลอร์ C++ (เช่น g++):
    
    Bash
    
    ```
    g++ Book.cpp -o book_manager
    
    ```
    
3.  **รัน**:
    
    Bash
    
    ```
    ./book_manager
    
    ```
    

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และการสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ เช่น การค้นหาหนังสือ, การอัปเดตข้อมูล, หรือการจัดเก็บลงไฟล์ ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **BookManager**! 👋 This project is a simple C++ program that demonstrates the use of a **Class to manage book information** 📖. You'll see how to create book objects, set properties like title, author, ISBN, and price, and display that information.

### Key Features 🌟

-   **Book Object Creation**: Create new `Book` objects with initial title, author, and ISBN.
-   **Set Price**: Set the price of a book, with validation to ensure the price is not negative.
-   **Display Book Information**: Show all details of a book, including its title, author, ISBN, and price.

### Code Structure Overview 🧑‍💻

This project consists of a `Book` class, which includes the following members:

-   **Private Members**: `title`, `author`, `isbn`, and `price`.
-   **Constructor**: `Book(string t, string a, string i)` to initialize book properties.
-   **Public Methods**:
    -   `setPrice(double p)`: To set the book's price.
    -   `getPrice()`: To retrieve the book's price.
    -   `displayBookInfo()`: To display all detailed information about the book.

Example usage in `main()`:

C++

```
// Create the first book
Book book1("Algorithms", "Thomas H. Cormen", "978-0262033848"); //
book1.setPrice(750.50); //
book1.displayBookInfo(); //

// Create the second book
Book book2("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "978-0345391803"); //
book2.setPrice(350.00); //
book2.displayBookInfo(); //

```

### How to Compile and Run 🚀

1.  **Save the Code**: Save the code above as `Book.cpp`.
2.  **Compile**: Open your Terminal or Command Prompt and use a C++ compiler (e.g., g++):
    
    Bash
    
    ```
    g++ Book.cpp -o book_manager
    
    ```
    
3.  **Run**:
    
    Bash
    
    ```
    ./book_manager
    
    ```
    

### Contribution 🤝

This project is for learning and demonstration purposes. If you have suggestions for code improvements or want to add new features like searching, updating book data, or file storage, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)