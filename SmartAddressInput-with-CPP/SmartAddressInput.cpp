#include <iostream>
#include <limits> // สำหรับ numeric_limits
using namespace std;

//เรียกใช้ฟังก์ชัน
void showdata (string name,string address = "Bangkok");
int main()
{
    //ประกาศตัวแปร
    string name;
    string input_address;

    //รับข้อมูล
    cout << "Name = ";
    cin >> name;

    //ทำให้เก็บข่้อมูลที่อยู่ต่อได้ โดยไม่สนใจ cin ที่มาจาก name
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Address (press Enter for default 'Bangkok') = ";
    getline(cin , input_address); //ระบบจะไม่บังคับให้กรอกที่อยู่

    //ตรวจสอบว่าผู้ใช้กรอกที่อยู่หรือไม่
     if (input_address.empty()) {
        showdata(name);
    } else {
        showdata(name,input_address);
    }
}

//ฟังก์ชั่นแสดงผลข้อมูล
void showdata (string name,string address){
  cout << "------Show Data---------" << "\n";
  cout << "Student Name  = " << name << "\n";
  cout << "Address = " << address << "\n";
  cout << "---------------" << "\n";
}
