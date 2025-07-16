#include <iostream>
using namespace std;
int main() {
    cout << "Calculator" << endl;
    cout << "----------------" << endl;
    int op,num1,num2;
    cin >> op;
    if(op==1){
        cout << "Adder function" << endl;
        // num1
        cout << "enter num1 : ";
        cin >> num1;
        cout << endl;
        // num2
        cout << "enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "----------------" << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    }else if(op==2){
        cout << "Subtract function" << endl;
        cout << "enter num1 : ";
        cin >> num1;
        cout << endl;
        // num2
        cout << "enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "----------------" << endl;
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
        
    }else if(op==3){
        cout << "Multipy function" << endl;
        cout << "enter num1 : ";
        cin >> num1;
        cout << endl;
        // num2
        cout << "enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "----------------" << endl;
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        
    }else if(op==4){
        cout << "Divide function" << endl;
        cout << "enter num1 : ";
        cin >> num1;
        cout << endl;
        // num2
        cout << "enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "----------------" << endl;
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    
    }else{
        cout << "Invaild data" << endl;
        cout << "Deez nut. hah, got em Hahaha" << endl;
    }
    
    return 0;
}
