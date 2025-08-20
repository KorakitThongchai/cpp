#include <iostream> // สำหรับการรับค่า input และการแสดงผล output
#include <cmath>    // สำหรับการใช้ฟังก์ชัน pow() ในการยกกำลัง
using namespace std;

int main() {
    double weight, height, bmi; // ประกาศตัวแปรน้ำหนัก, ส่วนสูง, BMI
    
    
    cout << "Enter your weight in kg : ";
    cin >> weight; //รับข้อมูลน้ำหนัก
    
    cout << "Enter your height in cm : " << endl;
    cin >> height; //รับข้อมูลส่วนสูง
    
    //คำณวนค่า BMI = weight / (height)(height)
    if( weight >0 && height >0 ) {
        double heM = height / 100;
        bmi = weight / pow(heM, 2); //สูตร BMI = น้ำหนัก / (ส่วนสูง)(ส่วนสูง)
        
        cout << "your BMI is : " << bmi << endl; // แจ้งค่า BMI
    
    // ฟังชันช์หากเขียนนอกเหนือจากตัวเลข
    }else{
        cout << "Invaild" << endl;
        return 0;
    }
    
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    }else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Category: Normal weight" << endl;
    }else if (bmi >= 24.9 && bmi < 29.9) {
        cout << "Category: Overweight" << endl;
    }else {
        cout << "Category: Obesity" << endl;
    }

    return 0;
}
