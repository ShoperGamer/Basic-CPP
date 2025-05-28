# 🚀 MathOperations 🚀

### **โปรแกรมคำนวณยกกำลังด้วย C++**

โปรเจกต์ `MathOperations` เป็นโปรแกรม C++ แบบคอนโซลที่ถูกออกแบบมาเพื่อสาธิตการคำนวณยกกำลัง (AB) โดยใช้ฟังก์ชันที่สร้างขึ้นเองโดยเฉพาะ โปรแกรมนี้จะรับค่าฐาน (base) และเลขชี้กำลัง (exponent) จากผู้ใช้ และทำการคำนวณผลลัพธ์อย่างง่ายดายผ่านการวนลูปภายในฟังก์ชัน

----------

### ✨ **คุณสมบัติเด่น**

-   **🧮 การคำนวณยกกำลัง:** สามารถคำนวณค่า AB (A ยกกำลัง B) ได้อย่างแม่นยำ
-   **⌨️ อินพุตจากผู้ใช้:** รับค่าฐานและเลขชี้กำลังโดยตรงจากผู้ใช้ผ่านหน้าต่างคอนโซล
-   **🧩 ฟังก์ชันที่สร้างเอง:** ใช้ประโยชน์จากฟังก์ชัน `power()` ที่ผู้ใช้กำหนดขึ้นเอง เพื่อดำเนินการคำนวณ

----------

### 🖥️ **การรันโปรแกรม**

หากต้องการคอมไพล์และรันโปรแกรมนี้บนเครื่องของคุณ สามารถทำตามขั้นตอนง่ายๆ ดังนี้:

1.  **คอมไพล์:** เปิด Terminal หรือ Command Prompt ของคุณ และใช้คอมไพเลอร์ C++ (เช่น `g++` ใน MinGW หรือ GCC) เพื่อคอมไพล์ไฟล์ `main.cpp`:
    
    Bash
    
    ```
    g++ main.cpp -o MathOperations
    
    ```
    
2.  **รัน:** หลังจากคอมไพล์สำเร็จ คุณสามารถเรียกใช้ไฟล์โปรแกรมที่สร้างขึ้นมาได้เลย:
    
    Bash
    
    ```
    ./MathOperations
    
    ```
    
    _(สำหรับผู้ใช้งาน Windows: คุณสามารถรันได้โดยพิมพ์ `MathOperations.exe`)_
    

----------

### 📝 **ตัวอย่างการใช้งาน**

เมื่อคุณรันโปรแกรม โปรแกรมจะขอให้คุณป้อนค่าต่างๆ ดังตัวอย่างด้านล่าง:

```
Enter base number: 2
Enter exponent: 3
Result: 2 raised to the power of 3 is 8

```

----------




# English



# 🚀 MathOperations 🚀

### **C++ Exponentiation Program**

The `MathOperations` project is a C++ console application designed to demonstrate exponentiation (AB) using a custom-built function. This program takes a base and an exponent value from the user and computes the result simply through a loop-based approach within the function.

----------

### ✨ **Key Features**

-   **🧮 Exponentiation Calculation:** Accurately computes AB (A raised to the power of B).
-   **⌨️ User Input:** Accepts both the base and exponent values directly from the user via the console.
-   **🧩 Custom Function:** Leverages a user-defined `power()` function to perform the core calculation.

----------

### 🖥️ **How to Run**

To compile and run this program on your machine, follow these simple steps:

1.  **Compile:** Open your Terminal or Command Prompt and use a C++ compiler (e.g., `g++` from MinGW or GCC) to compile the `main.cpp` file:
    
    Bash
    
    ```
    g++ main.cpp -o MathOperations
    
    ```
    
2.  **Run:** Once compiled successfully, you can execute the generated program file:
    
    Bash
    
    ```
    ./MathOperations
    
    ```
    
    _(For Windows users: you can run it by typing `MathOperations.exe`)_
    

----------

### 📝 **Usage Example**

When you run the program, it will prompt you to enter values as shown in the example below:

```
Enter base number: 2
Enter exponent: 3
Result: 2 raised to the power of 3 is 8

```

----------