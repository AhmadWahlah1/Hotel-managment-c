#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;
    ifstream file("p2.txt");
    while (getline(file, text)) {
        cout << text << endl;
    }
    file.close();

    ofstream file2;
    file2.open("t1.txt", ios::app);
   	file2<<"list1 of t1 "<<endl;
    file2 << "list2 of t1 "<<endl;
    file2 << "list3 of t1 "<<endl;
    file2.close();

    return 0;
}
