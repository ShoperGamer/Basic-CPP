#include <iostream> //input / Output
using namespace std; //เรียก std ทีเดียวจบ

int main()
{
// ประกาศตัวแปร
 string name;
 int score;

//รับข้อมูล
  cout << "name = ";
  cin >> name;
  cout << "score = ";
  cin >> score;

//ตรวจสอบคะแนน , ทักทาย
  string status,day;
  bool conditon = score >= 50;
  if(conditon){
    status = "Pass Exam";
    day = "Have a Good Day";
  }
  else {
    status = "Failed Exam";
    day = "Have a Bad Day";
  }

//แสดงผล
  cout << "---Status Exam----" << "\n";
  cout << "Hello " << name << " " << day << "\n";
  cout << "Status = " << status << "\n";
}
