#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

class Room {
private:
    int id;
    string name;
    string date;
    string roomType;

public:
    Room(int id, const string& name, const string& date, const string& roomType)
        : id(id), name(name), date(date), roomType(roomType) {}

    int getID() const { 
        return id; 
    }
    const string& getName() const {
        return name; 
    }
    const string& getDate() const { 
        return date; 
    }
    const string& getRoomType() const { 
        return roomType; 
    }

    void display() const;
};

void Room::display() const {
    cout << "|Room ID: (>>> " << id << " <<<)";
    cout << "\n|Customer Name: (>>> " << name << " <<<)";
    cout << "\n|Allocated Date: (>>> " << date << " <<<)";
    cout << "\n|Room Type: (>>> " << roomType << " <<<)" << endl;
}

class Hotel {
private:
    vector<Room> rooms;

public:
    void insertRoom();
    void searchRoom(int roomId);
    void updateRoom(int roomId);
    void deleteRoom(int roomId);
    void displayAllRooms();
};

void Hotel::insertRoom() {
    int id;
    string name, date, roomType;

    system("cls");
    cout << "\n\t\t\t\t\t---------------------------------------------";
    cout << "\n\t\t\t\t\t           Insert New Room Record           ";
    cout << "\n\t\t\t\t\t---------------------------------------------";

    cout << "\nEnter Room ID: >>> ";
    cin >> id;
    cout << "------------------------------------------------------------------------------------------------------------------------";
    cout << "\nEnter Customer Name: >>>  ";
    cin.ignore();
    getline(cin, name);
    cout << "------------------------------------------------------------------------------------------------------------------------";

    // Validate and set the date in the correct format
    while (true) {
        try {
            cout << "\nEnter Allocated Date (YYYY-MM-DD): >>> ";
            cin >> date;
            regex datePattern(R"(^\d{4}-\d{2}-\d{2}$)");
            if (!regex_match(date, datePattern)) {
                throw runtime_error("Invalid date format. Please enter the date in YYYY-MM-DD format.");
            }
            break;
        } catch (const exception& e) {
            cout << e.what() << endl;
        }
    }

    cout << "------------------------------------------------------------------------------------------------------------------------";
    cout<<"(Please Enter in >(WORDS)OR(NUMBER)<):-\n";
    cout << "\nEnter Room Type (1.Single/2.Double/3.Triple): >>>";
    cin.ignore();
    getline(cin, roomType);

    Room room(id, name, date, roomType);
    rooms.push_back(room);

    cout << "\n_________________________________________________Room Inserted Successfully____________________________________________\n" << endl;
}

void Hotel::searchRoom(int roomId) {
    system("cls");
    cout << "\n\t\t\t\t\t---------------------------------------------";
    cout << "\n\t\t\t\t\t            Search Room by Room ID          ";
    cout << "\n\t\t\t\t\t---------------------------------------------\n";

    for (const Room& room : rooms) {
        if (room.getID() == roomId) {
            room.display();
            return;
        }
    }

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~((Room not found))~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
}

void Hotel::updateRoom(int roomId) {
    system("cls");
    cout << "\n\t\t\t\t\t---------------------------------------------";
    cout << "\n\t\t\t\t\t             Update Room Record              ";
    cout << "\n\t\t\t\t\t---------------------------------------------";

    for (Room& room : rooms) {
        if (room.getID() == roomId) {
            int id;
            string name, date, roomType;

            cout << "\n|Enter Room ID:>>> ";
            cin >> id;
            cout << "------------------------------------------------------------------------------------------------------------------------";
            cout << "\n|Enter Customer Name:>>> ";
            cin.ignore();
            getline(cin, name);

            // Validate and set the date in the correct format
            while (true) {
                try {
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    cout << "\n|Enter Allocated Date (YYYY-MM-DD):>>> ";
                    cin >> date;
                    regex datePattern(R"(^\d{4}-\d{2}-\d{2}$)");
                    if (!regex_match(date, datePattern)) {
                        throw runtime_error("Invalid date format. Please enter the date in YYYY-MM-DD format.");
                    }
                    break;
                } catch (const exception& e) {
                    cout << e.what() << endl;
                }
            }

            cout << "------------------------------------------------------------------------------------------------------------------------";
            cout << "\n|Enter Room Type (1.Single/2.Double/3.Triple):>>> ";
            cin.ignore();
            getline(cin, roomType);

            room = Room(id, name, date, roomType);

            cout << "\n_________________________________________________Room Updated Successfully___________________________________________\n" << endl;
            return;
        }
    }

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~((Room not found))~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
}

void Hotel::deleteRoom(int roomId) {
    for (auto it = rooms.begin(); it != rooms.end(); ++it) {
        if (it->getID() == roomId) {
            rooms.erase(it);
            cout << "\n_________________________________________________Room Deleted Successfully____________________________________________\n" << endl;
            return;
        }
    }
    
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~((Room not found))~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
}

void Hotel::displayAllRooms() {
    system("cls");
    cout << "\n\t\t\t\t\t---------------------------------------------";
    cout << "\n\t\t\t\t\t           All Room Records           ";
    cout << "\n\t\t\t\t\t---------------------------------------------\n";

    if (rooms.empty()) {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~((No rooms available))~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
        return;
    }

    cout << "Total number of records: " << rooms.size() << endl;

    for (size_t i = 0; i < rooms.size(); i++) {
        cout << "\n|Record Number: >>>( " << i + 1 <<" )<<<"<< endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
        rooms[i].display();
    }
}

void show() {
    cout << "------------------------------------------------ Hotel Management System -----------------------------------------------" << endl;
    cout << "|Sr.No\t|Function\t\t\t\t\t|Description";
    cout << "\n------------------------------------------------------------------------------------------------------------------------";
    cout << "|1.\t|Insert New Room\t\t\t\t|Enter 1 to insert a new room";
    cout << "\n|2.\t|Search Room by Room ID\t\t\t\t|Enter 2 to search a room by ID";
    cout << "\n|3.\t|Update Room Record\t\t\t\t|Enter 3 to update a room record";
    cout << "\n|4.\t|Delete Room by Room ID\t\t\t\t|Enter 4 to delete a room by ID";
    cout << "\n|5.\t|Display All Room Records\t\t\t|Enter 5 to display all room records";
    cout << "\n|6.\t|Exit\t\t\t\t\t\t|Enter 6 to exit the program";
    cout << "\n------------------------------------------------------------------------------------------------------------------------";
    cout << "\n\n|Please enter your choice: >>> ";
}

int main() {
    Hotel hotel;
    int choice;
    int roomId;

    while (true) {
        show();
        cin >> choice;

        switch (choice) {
        case 1:
            hotel.insertRoom();
            break;
        case 2:
            cout << "\nEnter Room ID to search: >>> ";
            cin >> roomId;
            hotel.searchRoom(roomId);
            break;
        case 3:
            cout << "\nEnter Room ID to update: >>> ";
            cin >> roomId;
            hotel.updateRoom(roomId);
            break;
        case 4:
            cout << "\nEnter Room ID to delete: >>> ";
            cin >> roomId;
            hotel.deleteRoom(roomId);
            break;
        case 5:
            hotel.displayAllRooms();
            break;
        case 6:
            return 0;
        default:
            cout << "\nInvalid choice. Please enter a valid option.\n" << endl;
        }
    }

    return 0;
}
