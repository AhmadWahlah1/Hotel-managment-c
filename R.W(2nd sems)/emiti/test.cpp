#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "\t\t\t\t file handling:\n";

    string text, text1;
    
    ofstream file3;
    file3.open("t1.txt", ios::app);
   	file3<<"list1 of t1 "<<endl;
    file3 << "list2 of t1 "<<endl;
    file3 << "list3 of t1 "<<endl;
    file3.close();

    ifstream yourfile("t1.txt");
    while (getline(yourfile, text)) {
    
        cout << text << endl;
    }
    yourfile.close();

    ofstream file2("t2.text", ios::app);
 //   if (file2.is_open()) {
        file2 << "list of t2.text" << endl;
        file2.close();
   // } else {
     //   cout << "Error opening file: p2.text\n";
    //}

    ifstream myfile("t2.text");
    while (getline(myfile, text1)) {
        cout << text1 << endl;
    }
    myfile.close();

    return 0;
}
