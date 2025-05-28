# **ตรวจสอบสถานะผลสอบ (Exam Status Checker)** 📚✨



## **เกี่ยวกับโปรเจกต์นี้** 

โปรเจกต์ **"ตรวจสอบสถานะผลสอบ"** เป็นโปรแกรม C++ แบบคอนโซลขนาดเล็ก ที่ช่วยให้ผู้ใช้สามารถป้อนชื่อและคะแนนสอบได้ 📝 จากนั้นโปรแกรมจะทำการตรวจสอบคะแนนและแจ้งสถานะว่า1 "สอบผ่าน" หรือ "สอบไม่ผ่าน" พร้อมข้อความทักทายที่แตกต่างกันไปตามผลลัพธ์ 🥳

----------

## **คุณสมบัติ** ✨

-   รับชื่อผู้ใช้และคะแนนสอบ 📥
-   ตรวจสอบว่าคะแนนมากกว่าหรือเท่ากับ 50 เพื่อพิจารณาสถานะ **"สอบผ่าน"** ✅
-   แสดงผลสถานะการสอบและข้อความทักทายที่ปรับเปลี่ยนตามผลลัพธ์ 💬

----------

## **การตั้งค่าและการรัน** 🚀

1.  คอมไพล์โค้ด:
    
    ใช้คอมไพเลอร์ C++ (เช่น g++ ใน MinGW, MSVC ใน Visual Studio, หรือ Dev-C++) เพื่อคอมไพล์ไฟล์ .cpp ของคุณ
    
    Bash
    
    ```
    g++ your_program_name.cpp -o exam_checker
    
    ```
    
    (แทนที่ `your_program_name.cpp` ด้วยชื่อไฟล์โค้ดของคุณ เช่น `exam_status.cpp`)
    
2.  รันโปรแกรม:
    
    หลังจากคอมไพล์สำเร็จ คุณจะได้ไฟล์ที่รันได้ (.exe บน Windows) ให้รันไฟล์นั้นจาก Command Prompt หรือ PowerShell
    
    Bash
    
    ```
    ./exam_checker
    
    ```
    
3.  ป้อนข้อมูล:
    
    โปรแกรมจะถามให้คุณป้อนชื่อและคะแนนในหน้าต่างคอนโซล ⌨️
    

----------

## **ตัวอย่างการทำงาน** 🖥️

```
name = Judy
score = 75
---Status Exam----
Hello Judy Have a Good Day
Status = Pass Exam

```

```
name = Mike
score = 40
---Status Exam----
Hello Mike Have a Bad Day
Status = Failed Exam

```

----------

# **Exam Status Checker** 📚✨

----------

## **About This Project** 

The **"Exam Status Checker"** is a small console-based C++ program that allows users to input their name and exam score 📝. The program then checks the score and determines whether the user has "Passed" or "Failed" the exam, providing a personalized greeting based on the outcome 🥳.

----------

## **Features** ✨

-   Accepts user's2 name and exam score as input. 📥
-   Determines **"Pass"** status if the score is 50 or greater. ✅
-   Displays the exam status and a tailored greeting based on the result. 💬

----------

## **Setup and Running** 🚀

1.  Compile the Code:
    
    Use a C++ compiler (e.g., g++ with MinGW, MSVC in Visual Studio, or Dev-C++) to compile your .cpp file.
    
    Bash
    
    ```
    g++ your_program_name.cpp -o exam_checker
    
    ```
    
    (Replace `your_program_name.cpp` with your actual code file name, e.g., `exam_status.cpp`)
    
2.  Run the Program:
    
    After successful compilation, you will have an executable file (.exe on Windows). Run this file from your Command Prompt or PowerShell.
    
    Bash
    
    ```
    ./exam_checker
    
    ```
    
3.  Input Data:
    
    The program will prompt you to enter your name and score in the console window. ⌨️
    

----------

## **Example Usage** 🖥️

```
name = Judy
score = 75
---Status Exam----
Hello Judy Have a Good Day
Status = Pass Exam

```

```
name = Mike
score = 40
---Status Exam----
Hello Mike Have a Bad Day
Status = Failed Exam

```

----------

