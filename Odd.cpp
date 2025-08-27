#include <iostream>
using namespace std;
int loop_num = 1;
int fixed_loop;

void getLoop(){
    cout << "Enter number of loop : ";
    cin >> fixed_loop;
    cout << endl;
}

int main() {
    cout << "===ODD number program===" << endl;
    getLoop();
    while(loop_num <= fixed_loop){
        if(loop_num % 2 != 0){
         cout << "Number : " << loop_num << endl;
        }
        loop_num++;
    }

    return 0;
}
