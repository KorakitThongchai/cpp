#include <iostream>
using namespace std;
int loop_num = 1;
int fixed_loop;

void printMyName() {
    cout << " Ich heiße Korakit Thongchai." << endl;
}
void getLoop() {
    cin >> fixed_loop;
}

int main() {
    getLoop();
    while (loop_num <= fixed_loop) {
        cout << "Loop :" << loop_num;
        
        if(loop_num == 7) {
            cout << " Ich heiße Kaiser Michael." << endl;
        }else{
            printMyName();
        }
        loop_num++;
    }
  
    return 0;
}
