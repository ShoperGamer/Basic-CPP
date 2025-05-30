#include <iostream>
using namespace std;

//สี่เหลี่ยมผืนผ้า
class Rectangle {

//ค่าเริ่มต้น
private:
double length = 0.0;
double width = 0.0;

public:
    Rectangle() { //รับค่า Array
    }

    //เอาไว้รับค่า เช่น Rectangle(10.0, 5.0);
    Rectangle(double l, double w){
    setLength(l);
    setWidth(w);
    }

//ตรวจสอบค่าห้ามน้อยกว่า 0 (ความยาว กับ ความสูงติดลบไม่ได้)
void setLength(double l){
if (l >= 0) {
        length = l;
}
else {
    cout << "Error" << endl;
    length = 0.0; //reset
}
}

void setWidth(double w){
if (w >= 0) {
        width = w;
}
else {
    cout << "Error";
    width = 0.0; //reset
}
}

//คืนค่าความยาว
double getLength(){
 return length;
}

//คืนค่าความกว้าง
double getWidth(){
 return width;
}

//คำนวณ + คืนค่าพื้นที่
double calculateArea(){
    return length * width;
    }

//คำนวณ + คืนค่าเส้นรอบรูป
double calculatePerimeter(){
    return 2 * (length + width);
    }
};

int main(){

const int num = 2;
Rectangle rect[num]; //เก็บข้อมูลโดยใช้ Array ที่ชื่อ num

//ลูปการรับข้อมูล
for (int i = 0; i < num; i++){

  //ประกาศตัวแปร
  double l,w;

cout << "--------------welcome------------" << endl;
cout << "length : ";
    cin >> l;
cout << "Rectangle : ";
    cin >> w;

//ส่งค่า l กับ w ขึ้นไปคำนวณกับสูตรต่างๆ
rect[i].setLength(l);
rect[i].setWidth(w);

cout << " "<< endl;
}

//ลูปแสดงผลลัพธ์
for (int i = 0; i < num; i++){

cout << "Length: " << rect[i].getLength() << endl;
cout << "Width: " << rect[i].getWidth() << endl;
cout << "Area: " << rect[i].calculateArea() << endl;
cout << "Perimeter: " << rect[i].calculatePerimeter() << endl;
cout << " "<< endl;
}
}
