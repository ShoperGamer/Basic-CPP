#include <iostream>

using namespace std;

int main()
{
    //ประกาศตัวแปร
    float amount,total ;

    //เก็บข้อมูล + ยืนยันข้อมูล
    cout << "------Judy Promotion------"<<"\n";
    cout << "input your amount = ";
    cin >> amount;
    cout << "Amount = "<< amount << "\n";

    //เงื่อนไขหลัก
    if(amount >= 15000){
        cout << "You have Discount"<< "\n";

        //เงื่อนไขย่อย

        //ลด 15%
        if(amount >= 15000 && amount < 20000){
            total = amount * 0.15;
            cout << "Discount 15%"<< "\n";
            cout << "total = " << total << "\n";
        }

        //ลด 20%
        else if(amount >= 20000 && amount < 30000){
            total = amount * 0.20;
            cout << "Discount 20%"<< "\n";
            cout << "total = " << total << "\n";
        }

        //ลด 30%
        else if(amount == 30000){
            total = amount * 0.30;
            cout << "Discount 30%"<< "\n";
            cout << "total = " << total << "\n";
        }

        //ลด 50%
         else{
            total = amount * 0.50;
            cout << "Discount 50%"<< "\n";
            cout << "total = " << total << "\n";
        }
    }

    else {
        cout << "You Don't have Discount"<<"\n";
    }
    
    //ขีดเส้นใต้ (ตกแต่ง)
    cout << "-------------"<<"\n";
}
