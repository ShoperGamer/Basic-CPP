# Grade Calculator 🎓

โปรเจกต์นี้คือโปรแกรมภาษา C++ อย่างง่ายสำหรับคำนวณเกรดของนักเรียนจากคะแนนที่ป้อนเข้ามา เหมาะสำหรับผู้เริ่มต้นที่ต้องการเรียนรู้พื้นฐานการเขียนโปรแกรมและการจัดการเงื่อนไข.

## คุณสมบัติ ✨

-   **รับชื่อและคะแนนนักเรียน**: รับชื่อนักเรียนและคะแนนระหว่าง 0-100.
-   **คำนวณและแสดงผลเกรด**: กำหนดเกรดตามช่วงคะแนนมาตรฐาน:
    -   `80-100`: **A**
    -   `70-79`: **B**
    -   `60-69`: **C**
    -   `50-59`: **D**
    -   `0-49`: **F**
-   **การจัดการข้อมูลไม่ถูกต้อง**: แจ้งเตือนผู้ใช้หากป้อนคะแนนที่อยู่นอกช่วงที่กำหนด (น้อยกว่า 0 หรือมากกว่า 100).

## วิธีการใช้งาน 🚀

โปรแกรมนี้เขียนด้วยภาษา C++ คุณสามารถคอมไพล์และรันได้บนระบบปฏิบัติการส่วนใหญ่ที่มี C++ Compiler.

1.  คอมไพล์โค้ด:
    
    ใช้คอมไพเลอร์ C++ ที่คุณมี (เช่น g++, MinGW, Visual Studio) คอมไพล์ไฟล์ main.cpp (หรือชื่อไฟล์โค้ดของคุณ)
    
    Bash
    
    ```
    g++ main.cpp -o grade_calculator
    
    ```
    
2.  รันโปรแกรม:
    
    หลังจากคอมไพล์สำเร็จ คุณสามารถรันโปรแกรมได้จาก Command Prompt หรือ Terminal.
    
    Bash
    
    ```
    ./grade_calculator
    
    ```
    
    _(สำหรับผู้ใช้ Windows อาจเป็น `grade_calculator.exe`)_
    
3.  ป้อนข้อมูล:
    
    โปรแกรมจะร้องขอให้คุณป้อนชื่อและคะแนนของนักเรียน.
    

## ตัวอย่างการทำงาน 🖥️

นี่คือตัวอย่างบางส่วนของการโต้ตอบกับโปรแกรม:

```
----Hello Student----
name = John Doe
score (0-100) = 85
Grade = A

```

```
----Hello Student----
name = Jane Smith
score (0-100) = 45
Grade = F

```

```
----Hello Student----
name = Invalid Input
score (0-100) = 101
Grade N
Input Try Again

```

----------

----------

# Grade Calculator 🎓

This project is a simple C++ program designed to calculate a student's grade based on their input score. It's ideal for beginners looking to understand basic programming concepts and conditional logic.

## Features ✨

-   **Student Name & Score Input**: Takes a student's name and a score between 0 and 100.
-   **Grade Calculation & Display**: Assigns and displays a grade based on standard score ranges:
    -   `80-100`: **A**
    -   `70-79`: **B**
    -   `60-69`: **C**
    -   `50-59`: **D**
    -   `0-49`: **F**
-   **Invalid Input Handling**: Notifies the user if an invalid score (less than 0 or greater than 100) is entered.

## How to Use 🚀

This program is written in C++. You can compile and run it on most operating systems with a C++ compiler.

1.  Compile the Code:
    
    Use your preferred C++ compiler (e.g., g++, MinGW, Visual Studio) to compile the main.cpp file (or whatever you named your code file).
    
    Bash
    
    ```
    g++ main.cpp -o grade_calculator
    
    ```
    
2.  Run the Program:
    
    After successful compilation, you can run the program from your Command Prompt or Terminal.
    
    Bash
    
    ```
    ./grade_calculator
    
    ```
    
    _(For Windows users, it might be `grade_calculator.exe`)_
    
3.  Enter Data:
    
    The program will prompt you to enter the student's name and score.
    

## Example Usage 🖥️

Here are some examples of interacting with the program:

```
----Hello Student----
name = John Doe
score (0-100) = 85
Grade = A

```

```
----Hello Student----
name = Jane Smith
score (0-100) = 45
Grade = F

```

```
----Hello Student----
name = Invalid Input
score (0-100) = 101
Grade N
Input Try Again

```