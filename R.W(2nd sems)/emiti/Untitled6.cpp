    ofstream file2;
    file2.open("t2.txt", ios::app);
    file2 << "---------------------\n" << endl;
    file2.close();

    ifstream myfile1("t2.txt");
    while (getline(myfile1, text)) {  
        cout << text << endl;
    }
    mufile1.close();