#include <iostream>
using namespace std;

//ประกาศตัวแปร
    const int maxsize = 9999; // ขนาด Array = 9999 (ขนาดบังคับ เปลี่ยนค่าข้างนอกไม่ได้)
    int numbers[maxsize]; // number = Array
    int count = 0; //เริ่มต้นที่ 0
    int num;

//เรียกใช้ฟังก์ชัน
void maxnum(int arr[],int size);
void minnum(int arr[],int size);

int main(){
    // รับตัวเลขจากผู้ใช้
    cout << "กรุณาป้อนตัวเลข (ป้อน 0 เพื่อหยุด):" << "\n";

    //เก็บค่าจากผู้ใช้เรื่อยๆ
    while (count < maxsize && cin >> num && num != 0) {
        numbers[count] = num;
        count++;
    }

    // แสดงตัวเลขก่อนเรียง
    cout << "\nตัวเลขก่อนเรียง: ";
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    cout << "----------------------------------------------------" << "\n";


// --- ส่วนสำหรับเรียงจากน้อยไปมาก ---

     int minnumber[maxsize];
    for (int i = 0; i < count; ++i) {
        minnumber[i]  = numbers[i];
    }
    minnum(minnumber, count);

    //แสดงผลลัพธ์ (น้อยไปมาก)
    cout << "ตัวเลขหลังเรียง (น้อยไปมาก): ";
    for (int i = 0; i < count; ++i) {
        cout << minnumber[i] << " ";
    }
    cout << "\n";


//---------------------------------------------------------


// --- ส่วนสำหรับเรียงจากมากไปน้อย ---
    int maxnumber[maxsize];
    for (int i = 0; i < count; ++i) {
        maxnumber[i] = numbers[i];
    }
    maxnum(maxnumber, count);

    // แสดงตัวเลขหลังเรียง (มากไปน้อย)
    cout << "ตัวเลขหลังเรียง (จากมากไปน้อย): ";
    for (int i = 0; i < count; ++i) {
        cout << maxnumber[i] << " ";
    }
    cout << "\n";
}


//-------------------------------------------------


//ฟังก์ชันมากสุดไปน้อยสุด
void maxnum(int arr[], int size) {
    //เรียงลำดับจากมากไปน้อย
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - 1 - i; ++j) {

            //เปรียบเทียบค่ามากค่าน้อย เทียบทีล่ะคู่ไปจนครบ มากกว่าขยับมาข้างหน้า น้อยกว่าขยับถอยหลัง
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


//--------------------------------------------------------------------------------------


//ฟังก์ชันน้อยไปมาก
void minnum(int arr[], int size) {
     //เรียงลำดับจากน้อยไปมาก
      for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - 1 - i; ++j) {

            //เปรียบเทียบค่าน้อย ค่ามาก เทียบทีล่ะคู่ไปจนครบ น้อยกว่าขยับมาข้างหน้า มากกว่าขยับถอยหลัง
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
