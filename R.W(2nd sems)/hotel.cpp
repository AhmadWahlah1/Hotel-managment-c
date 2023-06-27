#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Room {
private:
    int id;
    string name;
    int date;
    string roomType;

public:
    Room(int id, const string& name, int date, const string& roomType)
        : id(id), name(name), date(date), roomType(roomType) {}

    int getID() const { 
	return id; 
	}
    const string& getName() const {
	return name; 
	}
    int getDate() const { 
	return date; 
	}
    const string& getRoomType() const { 
	return roomType; 
	}

    void display() const;
};

void Room::display() const {
    cout << "\n|Room ID: (>>>" << id<<" <<<)";
    cout << "\n|Customer Name: (>>>" << name<<" <<<)";
    cout << "\n|Allocated Date: (>>>" << date<<" <<<)";
    cout << "\n|Room Type: (>>>" << roomType <<" <<<)"<< endl;
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
    int id, date;
    string name, roomType;

    cout << "\n\t\t\t\t\t---------------------------------------------";
    cout << "\n\t\t\t\t\t           Insert New Room Record           ";
    cout << "\n\t\t\t\t\t---------------------------------------------";

  //  cout << "\nSr.No\t\tFunction\t\tDescription";
//    cout << "\n------------------------------------------------";
 //   cout << "\n1.\tInsert New Room\tEnter 1 to insert a new room";

    cout << "\nEnter Room ID: >>>>>>>";
    cin >> id;
   // cout<<")"<<endl;
    cout << "------------------------------------------------------------------------------------------------------------------------";
    cout << "\nEnter Customer Name:>>>>>>>  ";
    cin.ignore();
    getline(cin, name);
   // cout<<")"<<endl;
    cout << "------------------------------------------------------------------------------------------------------------------------";
    cout << "\nEnter Allocated Date: >>>>>> ";
    cin >> date;
    //cout<<")"<<endl;
    cout << "------------------------------------------------------------------------------------------------------------------------";
    cout << "\nEnter Room Type (single/double/twin):>>>>>> ";
    cin.ignore();
    getline(cin, roomType);
 //   cout<<")"<<endl;

    Room room(id, name, date, roomType);
    rooms.push_back(room);

    cout << "\n_________________________________________________Room Inserted Successfully_________________________________________________" << endl;
}

void Hotel::searchRoom(int roomId) {
    cout << "\n\t\t\t\t\t---------------------------------------------";
    cout << "\n\t\t\t\t\t            Search Room by Room ID          ";
    cout << "\n\t\t\t\t\t---------------------------------------------";

  //  cout << "\nSr.No\t\tFunction\t\tDescription";
 //   cout << "\n------------------------------------------------";
 //   cout << "\n1.\tSearch Room by Room ID\tEnter 2 to search a room by ID";

    for (const Room& room : rooms) {
        if (room.getID() == roomId) {
            room.display();
            return;
        }
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Room not found~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void Hotel::updateRoom(int roomId) {
    cout << "\n\t\t\t\t\t---------------------------------------------";
    cout << "\n\t\t\t\t\t             Update Room Record              ";
    cout << "\n\t\t\t\t\t---------------------------------------------";

 //   cout << "\nSr.No\t\tFunction\t\tDescription";
//    cout << "\n------------------------------------------------";
//    cout << "\n1.\tUpdate Room Record\tEnter 3 to update a room record";

    for (Room& room : rooms) {
        if (room.getID() == roomId) {
            int id, date;
            string name, roomType;

            cout << "\n|Enter Room ID: ";
            cin >> id;
            cout << "------------------------------------------------------------------------------------------------------------------------";
            cout << "\n|Enter Customer Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "------------------------------------------------------------------------------------------------------------------------";
            cout << "\n|Enter Allocated Date: ";
            cin >> date;
            cout << "------------------------------------------------------------------------------------------------------------------------";
            cout << "\n|Enter Room Type (single/double/triple): ";
            cin.ignore();
            getline(cin, roomType);

            room = Room(id, name, date, roomType);

            cout << "\n_________________________________________________Room Updated Successfully_________________________________________________" << endl;
            return;
        }
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Room not found~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// Implement the deleteRoom and displayAllRooms functions similarly

int main() {
    Hotel hotel;
    int choice;
    int roomId;

    while (true) {
        cout << "\n------------------------------------------------ Hotel Management System -----------------------------------------------" << endl;
        cout << "|Sr.No\t|Function\t\t\t\t\t|Description";
        cout << "\n------------------------------------------------------------------------------------------------------------------------";
        cout << "\n|1.\t|Insert New Room\t\t\t\t|Enter 1 to insert a new room";
        cout << "\n|2.\t|Search Room by Room ID\t\t\t\t|Enter 2 to search a room by ID";
        cout << "\n|3.\t|Update Room Record\t\t\t\t|Enter 3 to update a room record";
        cout << "\n|4.\t|Delete Room by Room ID\t\t\t\t|Enter 4 to delete a room by ID";
        cout << "\n|5.\t|Display All Room Records\t\t\t|Enter 5 to display all room records";
        cout << "\n|6.\t|Exit\t\t\t\t\t\t|Enter 6 to exit the program";
        cout << "\n|Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.insertRoom();
                break;
            case 2:
                cout << "\n|Enter Room ID: ";
                cin >> roomId;
                hotel.searchRoom(roomId);
                break;
            case 3:
                cout << "\n|Enter Room ID: ";
                cin >> roomId;
                hotel.updateRoom(roomId);
                break;
            case 4:
                cout << "Enter Room ID: ";
                cin >> roomId;
                hotel.deleteRoom(roomId);
                break;
            case 5:
                hotel.displayAllRooms();
                break;
            case 6:
                exit(0);
            break;
          
            // Implement the cases for deleteRoom, displayAllRooms, and exit similarly
            default:
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Invalid choice~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
    }

    return 0;
}
