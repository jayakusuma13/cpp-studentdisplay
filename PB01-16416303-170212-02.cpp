#include <iostream>
#include <string>
using namespace std;

int main(){
    typedef struct{
        string name;
        string id;
    }user;
    user student;

    //name and id input
    cout << "insert your name: ";
    cin >> student.name;
    cout << "insert your id: ";
    cin >> student.id;
    
    //name and id output
    cout << student.name << " is a student with ID: " << student.id;

    return 0;
}
