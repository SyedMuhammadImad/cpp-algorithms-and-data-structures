#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>

using namespace std;

// ===============================
// 🚗 CLASS 1: Car (Stores Car Details)
// ===============================
class Car {
public:
    int carID;        // Unique Car ID
    int floorNumber;  // Floor where the car is parked
    int position;     // Position in the stack

    Car(int id, int floor, int pos) : carID(id), floorNumber(floor), position(pos) {}
};

// ===============================
// 🏢 CLASS 2: Floor (Stack-based Parking)
// ===============================
class Floor {
public:
    int floorNumber;
    int capacity;
    stack<int> parkedCars;  // Stack to manage cars (LIFO)

    Floor(int floorNum, int cap) : floorNumber(floorNum), capacity(cap) {}

    // 🚗 Add Car to Floor
    bool addCar(int carID) {
        if (parkedCars.size() < static_cast<size_t>(capacity)) {
            parkedCars.push(carID);
            return true;
        }
        return false;
    }

    // 🚗 Remove Car from Floor
    bool removeCar(int carID) {
        stack<int> tempStack;
        bool found = false;

        // Remove cars above the target car
        while (!parkedCars.empty()) {
            int topCar = parkedCars.top();
            parkedCars.pop();

            if (topCar == carID) {
                found = true; // Found the car
                break;
            }
            tempStack.push(topCar);
        }

        // Restore other cars
        while (!tempStack.empty()) {
            parkedCars.push(tempStack.top());
            tempStack.pop();
        }

        return found;
    }

    // 📌 Check if Floor is Full
    bool isFull() {
        return parkedCars.size() >= static_cast<size_t>(capacity);
    }
};

// ===============================
// 🚗🏢 CLASS 3: ParkingLot (Manages Entire Parking System)
// ===============================
class ParkingLot {
private:
    int floorCapacity;
    queue<int> entryQueue;       // Cars waiting to enter
    vector<Floor> floors;        // List of floors (Dynamic)
    list<int> overflowWaitlist;  // Overflow waitlist
    unordered_map<int, Car> parkedCarsMap;  // Store Car Details

public:
    // 🚗🏢 Constructor
    ParkingLot(int numFloors, int floorCap) : floorCapacity(floorCap) {
        if(numFloors<1 || numFloors>100 || floorCap<1 || floorCap>1000)throw invalid_argument("Invalid parking capacity");
        for (int i = 0; i < numFloors; i++) {
            floors.push_back(Floor(i + 1, floorCap));
        }
    }

    // 🚗 Car Entry
    void enterCar(int carID) {
        if(carID<=0 || parkedCarsMap.count(carID) || find(overflowWaitlist.begin(),overflowWaitlist.end(),carID)!=overflowWaitlist.end()){cout<<"Duplicate or invalid car\n";return;}
        entryQueue.push(carID);
        assignCarToFloor();
    }

    // 🏢 Assign Car to Available Floor
    void assignCarToFloor() {
        while (!entryQueue.empty()) {
            int carID = entryQueue.front();
            bool parked = false;

            for (size_t i = 0; i < floors.size(); i++) {
                if (!floors[i].isFull()) {
                    floors[i].addCar(carID);
                    parkedCarsMap.insert_or_assign(carID, Car(carID, static_cast<int>(i + 1), static_cast<int>(floors[i].parkedCars.size())));
                    cout << "✅ Car " << carID << " parked on Floor " << (i + 1) << ".\n";
                    entryQueue.pop();
                    parked = true;
                    break;
                }
            }

            if (!parked) {
                overflowWaitlist.push_back(carID);
                entryQueue.pop();
                cout << "⚠️ Parking Full! Car " << carID << " added to waitlist.\n";
            }
        }
    }

    // 🚗 Car Exit
    void exitCar(int carID) {
        if (parkedCarsMap.find(carID) == parkedCarsMap.end()) {
            cout << "❌ Car " << carID << " not found in parking lot.\n";
            return;
        }

        int floorNum = parkedCarsMap.at(carID).floorNumber - 1;
        if (floors[floorNum].removeCar(carID)) {
            cout << "🚗 Car " << carID << " exited from Floor " << (floorNum + 1) << ".\n";
            parkedCarsMap.erase(carID);
            assignCarFromWaitlist();
        } else {
            cout << "⚠️ Error: Car " << carID << " not found on Floor " << (floorNum + 1) << ".\n";
        }
    }

    // 🔄 Assign Car from Waitlist to Parking
    void assignCarFromWaitlist() {
        while (!overflowWaitlist.empty() && std::any_of(floors.begin(), floors.end(), [](Floor& floor){return !floor.isFull();})) {
            int carID = overflowWaitlist.front();
            overflowWaitlist.pop_front();
            entryQueue.push(carID);
            assignCarToFloor();
        }
    }

    // 📌 Display Parking Lot Status
    void displayStatus() {
        cout << "\n===== 🏢 Parking Lot Status =====\n";

        for (size_t i = 0; i < floors.size(); i++) {
            cout << "Floor " << (i + 1) << ": ";
            stack<int> temp = floors[i].parkedCars;
            if (temp.empty()) {
                cout << "[Empty]\n";
            } else {
                while (!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << "\n";
            }
        }

        // Show cars in entry queue
        cout << "Entry Queue: ";
        queue<int> tempQueue = entryQueue;
        if (tempQueue.empty()) {
            cout << "[Empty]\n";
        } else {
            while (!tempQueue.empty()) {
                cout << tempQueue.front() << " ";
                tempQueue.pop();
            }
            cout << "\n";
        }

        // Show cars in overflow waitlist
        cout << "Overflow Waitlist: ";
        if (overflowWaitlist.empty()) {
            cout << "[Empty]\n";
        } else {
            for (int car : overflowWaitlist) {
                cout << car << " ";
            }
            cout << "\n";
        }
    }

    // ➕ Expand Parking Lot
    void expandParkingLot(int newFloors) {
        if(newFloors<1 || newFloors>100 || floors.size()+static_cast<size_t>(newFloors)>100)throw invalid_argument("Invalid expansion");
        for (int i = 0; i < newFloors; i++) {
            floors.push_back(Floor(floors.size() + 1, floorCapacity));
        }
        cout << "🏢 Expanded Parking Lot! Total Floors: " << floors.size() << "\n";
        assignCarFromWaitlist();
    }
};

// ===============================
// 🎯 MAIN FUNCTION (TEST CASES)
// ===============================
int main() {
    ParkingLot parkingLot(2, 3);  // 2 floors, each with a capacity of 3 cars

    // 🚗 Car Entries
    parkingLot.enterCar(101);
    parkingLot.enterCar(102);
    parkingLot.enterCar(103);
    parkingLot.enterCar(104);
    parkingLot.enterCar(105);
    parkingLot.enterCar(106);
    parkingLot.enterCar(107);  // Should go to waitlist

    parkingLot.displayStatus();  // Show current parking lot status

    // 🚗 Car Exit
    parkingLot.exitCar(103);
    parkingLot.exitCar(102);

    parkingLot.displayStatus();

    // ➕ Expand Parking Lot
    parkingLot.expandParkingLot(1);
    parkingLot.displayStatus();

    return 0;
}
