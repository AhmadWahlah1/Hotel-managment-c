#include <iostream>
#include <fstream>
using namespace std;

main() {
 

    string text, text1;
   // ofstream file0;
   // file0.open("t1.txt", ios::app);
   // file0 << "                        file handling " << endl;
   // file0.close();
    
    ofstream file3;
    file3.open("t1.txt", ios::app);
    file3 << "list of t1 " << endl;
    file3.close();

    ifstream yourfile("t1.txt");
    while (getline(yourfile, text)) {  
        cout << text << endl;
    }
    yourfile.close();
    cout << "-----------------------\n";

    ofstream file2;
    file2.open("t2.txt", ios::app);
    file2 << "list of t2 " << endl;
    file2.close();

    ifstream myfile("t2.txt");
    while (getline(myfile, text)) {  
        cout << text << endl;
    }
    myfile.close();

    
}
