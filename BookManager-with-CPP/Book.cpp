#include <iostream>
using namespace std;

class Book {

//ค่าเริ่มต้น
 private:
 string title;
 string author;
 string isbn;
 double price = 0.0;

 public:

//เอาไว้รับค่า เช่น  Book book1("Algorithms", "Thomas H. Cormen", "978-0262033848");
 Book (string t,string a,string i){
 title = t;
 author = a;
 isbn = i;
 cout << "---------------Create New Book-------------------- " << endl;
 cout << "" << title << endl;
 }

//ตรวจสอบค่าไม่ให้น้อยกว่า 0 (ราคาติดลบไม่ได้)
 void setPrice(double p){
    if (p >= 0){
        price = p ;
        }
    else {
        cout << "error" << endl;
    }
 }

//แสดงผลค่าของราคา
double getPrice(){
   return price;
}

//ฟังก์ชันแสดงผลลัพธ์ทั้งหมด
void displayBookInfo(){
  cout << "--------Book Menu----------" << endl;
  cout << "Name = " << title << endl;
  cout << "Write = "<< author << endl;
  cout << "Id = "<< isbn << endl;
  cout << "price = "<< price << endl;
  cout << "---------------------" << endl;
}

};

int main(){

    //รับข้อมูล + เรียงฟังก์ชันแสดงผล
    Book book1("Algorithms", "Thomas H. Cormen", "978-0262033848");
    book1.setPrice(750.50);
    book1.displayBookInfo();

    cout << endl;

    Book book2("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "978-0345391803");
    book2.setPrice(350.00);
    book2.displayBookInfo();

}
