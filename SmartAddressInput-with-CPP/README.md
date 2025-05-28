# 🏡 SmartAddressInput 🧠

### **ระบบป้อนข้อมูลที่อยู่แบบอัจฉริยะด้วย C++**

โปรเจกต์ `SmartAddressInput` คือโปรแกรม C++ แบบคอนโซลที่สาธิตการรับข้อมูลจากผู้ใช้ โดยเน้นที่การจัดการค่าเริ่มต้น (Default Argument) สำหรับที่อยู่ หากผู้ใช้ไม่ได้ระบุ ระบบจะใช้ค่าเริ่มต้นที่กำหนดไว้ ("Bangkok") ฟังก์ชันนี้ผสมผสานการใช้งาน `cin` และ `getline` พร้อมการจัดการ Input Buffer เพื่อประสบการณ์การป้อนข้อมูลที่ยืดหยุ่นและเป็นมิตรกับผู้ใช้

----------

### ✨ **คุณสมบัติเด่น**

-   **👥 รับชื่อและที่อยู่:** สามารถรับข้อมูลชื่อและที่อยู่จากผู้ใช้
-   **📍 ที่อยู่เริ่มต้น (Default Address):** กำหนดค่าเริ่มต้น "Bangkok" สำหรับที่อยู่ หากผู้ใช้ไม่ป้อนข้อมูลเข้ามา
-   **💡 การจัดการ Input ที่ชาญฉลาด:** ใช้ `getline` เพื่อรับข้อมูลที่มีช่องว่างได้ และ `cin.ignore` เพื่อจัดการกับ Input Buffer ทำให้โปรแกรมไม่ข้ามบรรทัดเมื่อมีการป้อนข้อมูลแบบผสมผสาน (`cin` และ `getline`)
-   **⚙️ ฟังก์ชัน `showdata()`:** แสดงผลข้อมูลชื่อและที่อยู่ของผู้ใช้อย่างเป็นระเบียบ

----------

### 🖥️ **การรันโปรแกรม**

หากต้องการคอมไพล์และรันโปรแกรมนี้บนเครื่องของคุณ สามารถทำตามขั้นตอนง่ายๆ ดังนี้:

1.  **คอมไพล์:** เปิด Terminal หรือ Command Prompt ของคุณ และใช้คอมไพเลอร์ C++ (เช่น `g++` ใน MinGW หรือ GCC) เพื่อคอมไพล์ไฟล์ `main.cpp`:
    
    Bash
    
    ```
    g++ main.cpp -o SmartAddressInput
    
    ```
    
2.  **รัน:** หลังจากคอมไพล์สำเร็จ คุณสามารถเรียกใช้ไฟล์โปรแกรมที่สร้างขึ้นมาได้เลย:
    
    Bash
    
    ```
    ./SmartAddressInput
    
    ```
    
    _(สำหรับผู้ใช้งาน Windows: คุณสามารถรันได้โดยพิมพ์ `SmartAddressInput.exe`)_
    

----------

### 📝 **ตัวอย่างการใช้งาน**

เมื่อคุณรันโปรแกรม คุณจะถูกถามให้ป้อนค่าต่างๆ ดังตัวอย่างด้านล่าง:

#### **กรณีที่ 1: ป้อนชื่อและใช้ที่อยู่เริ่มต้น**

```
Name = Judy
Address (press Enter for default 'Bangkok') = 
------Show Data---------
Student Name  = Judy
Address = Bangkok
---------------

```

#### **กรณีที่ 2: ป้อนชื่อและที่อยู่ใหม่**

```
Name = Juji
Address (press Enter for default 'Bangkok') = Palestine (Nabus)
------Show Data---------
Student Name  = Juji
Address = Palestine (Nabus)
---------------

```



# English

# 🏡 SmartAddressInput 🧠

### **Intelligent Address Input System in C++**

The `SmartAddressInput` project is a C++ console application that demonstrates user input handling, with a specific focus on managing default arguments for addresses. If the user does not provide an address, the program will automatically use a predefined default value ("Bangkok"). This application combines the use of `cin` and `getline` along with input buffer management for a flexible and user-friendly input experience.

----------

### ✨ **Key Features**

-   **👥 Name and Address Input:** Capable of receiving both name and address information from the user.
-   **📍 Default Address:** Automatically sets "Bangkok" as the default address if no input is provided by the user.
-   **💡 Intelligent Input Handling:** Utilizes `getline` to capture input including spaces, and `cin.ignore` to manage the input buffer, preventing common input issues when mixing `cin` and `getline`.
-   **⚙️ `showdata()` Function:** Displays the user's name and address information in a clear and organized format.

----------

### 🖥️ **How to Run**

To compile and execute this program on your system, please follow these simple steps:

1.  **Compile:** Open your Terminal or Command Prompt and use a C++ compiler (e.g., `g++` from MinGW or GCC) to compile the `main.cpp` file:
    
    Bash
    
    ```
    g++ main.cpp -o SmartAddressInput
    
    ```
    
2.  **Run:** After successful compilation, you can run the generated executable file:
    
    Bash
    
    ```
    ./SmartAddressInput
    
    ```
    
    _(For Windows users: you can run it by typing `SmartAddressInput.exe`)_
    

----------

### 📝 **Usage Examples**

When you run the program, it will prompt you to enter values as shown in the examples below:

#### **Scenario 1: Entering Name and Using Default Address**

```
Name = Judy
Address (press Enter for default 'Bangkok') = 
------Show Data---------
Student Name  = Judy
Address = Bangkok
---------------

```

#### **Scenario 2: Entering Name and a New Address**

```
Name = Juji
Address (press Enter for default 'Bangkok') = Palestine (Nabus)
------Show Data---------
Student Name  = Juji
Address = Palestine (Nabus)
---------------

```