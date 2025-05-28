#include <iostream>
using namespace std;

//เรียกฟังก์ชั่น
int power (int base , int n);

int main()
{
//ประกาศตัวแปร
int number,base;

//รับค่า
cout << "input number = ";
cin >> number;
cout << "input base = ";
cin >> base;

//เรียกใช้ฟังก์ชั่น + แสดงผล
number = power(number,base);
cout << "number = " << number << "\n";
}

//ฟังก์ชั่นทีใช้คำนวณ
power (int base , int n){
    int number = 1;
  for (int i = 1; i <= n; i++ ){
    number = base * number;
  }
 return number; //แสดงผลลัพธ์
}
