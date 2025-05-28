#include <iostream>
#include <limits> // สำหรับ std::numeric_limits

using namespace std;

int main()
{
    //ประกาศตัวแปร
    string name;
    int score;
    char grade;

    //รับข้อมูล
    cout << "----Hello Student----"<< "\n";
    cout << "name = ";
    cin >> name;
    cout << "score (0-100) = ";
    cin >> score;

    // ตรวจสอบว่าการรับค่า score สำเร็จหรือไม่
    if (cin.fail()) {
        cout << "Grade N" << "\n";
        cout << "Input Try Again" << "\n";
        cin.clear(); // เคลียร์ error flags ของ cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // ล้างข้อมูลที่ไม่ถูกต้องออกจาก input buffer
    } 
    
    else {

        //รายละเอียด
        if (score >= 80 && score <= 100 ){
            grade = 'A';
            cout << "Grade = " << grade << "\n";
        }
        else if (score >= 70 && score <= 79 ){
            grade = 'B';
            cout << "Grade = " << grade << "\n";
        }
        else if (score >= 60 && score <= 69){
            grade = 'C';
            cout << "Grade = " << grade << "\n";
        }
        else if (score >= 50 && score <= 59){
            grade = 'D';
            cout << "Grade = " << grade << "\n";
        }
        else if (score >= 0 && score <= 49) {
            grade = 'F';
            cout << "Grade = " << grade << "\n";
        }
     //ไม่มี else เพราะว่ามีการตรวจสอบค่ามาก่อนแล้ว
    }
}
