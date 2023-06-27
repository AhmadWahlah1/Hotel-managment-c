#include <iostream>
#include <fstream>
using namespace std;

int main() {
   

    string text, text1;
    
    // cout << "\t\t\t\t file handling:\n";
    //ofstream file0;
    //file0.open("t1.txt", ios::app);
    //file0 << "                        file handling " << endl;
    //file0.close();

    ofstream file3;
    file3.open("p1.txt", ios::app);
    file3 << "list of p1 " << endl;
    file3.close();

    ifstream yourfile("p1.txt");
    while (getline(yourfile, text)) {  
        cout << text << endl;
    }
    yourfile.close();
    //ofstream file2;
    //file2.open("t2.txt", ios::app);
    //file2 << "---------------------\n" << endl;
    //file2.close();

    
 
    ofstream file9;
    file9.open("p2.txt", ios::app);
    file9 << "list of p2 " << endl;
    file9.close();

    ifstream myfile("p2.txt");
    while (getline(myfile, text)) {  
        cout << text << endl;
    }
    myfile.close();
    
    
    ifstream t1_file("p1.txt");
    ifstream t2_file("p2.txt");
    ofstream t3_file("p3.txt", ios::app);

    while (getline(t1_file, text)) {
        t3_file << text << endl;
    }

    while (getline(t2_file, text)) {
        t3_file << text << endl;
    }

    t1_file.close();
    t2_file.close();
    t3_file.close();

    return 0;
}