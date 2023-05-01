#include <iostream>
using namespace std;
int editmem(int pointer, char data) {
        char* memory = new char[pointer * 2];                             memory[pointer] = data;
        cout << "Injecting exploit..." << endl;
        if (memory[pointer] == data) {
                cout << "Exploit applied" << endl;
        } else {
                cout << "Exploit rejected!" << endl;
        }
        return 0;
}
int main() {
        cout << "Exploit injected! Now you can edit memory." << e>
        while(true) {
                int id;
                char data;
                cout << "Enter segment to edit >";
                cin >> id;
                cout << endl << "Enter data:";
                cin >> data;
                cout << endl << "Editing memory..." << endl;
                editmem(id, data);
                cout << endl << "Edited Successfully!" << endl;
        }
        return 0;
}
