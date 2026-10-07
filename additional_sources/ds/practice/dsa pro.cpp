#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <queue>
#include <stack>
#include <list>
#include <vector>
using namespace std;

class Car {
public:
    int carId, floorNo, position;
    Car(int id, int floor, int pos) : carId(id), floorNo(floor), position(pos) {}
};

class Floor {
public:
    int floorNo;
    int capacity;
    stack<int> parkedCars;
    
    Floor(int floorNum, int cap) : floorNo(floorNum), capacity(cap) {}
    
    bool addCar(int carId) {
        if (parkedCars.size() < static_cast<size_t>(capacity)) {
            parkedCars.push(carId);
            return true;
        }
        return false;
    }
    
    bool removeCar(int carId) {
        stack<int> tempStack;
        bool found = false;
        
        while (!parkedCars.empty()) {
            int topCar = parkedCars.top();
            parkedCars.pop();
            
            if (topCar == carId) {
                found = true;
                break;
            }
            tempStack.push(topCar);
        }
        while (!tempStack.empty()) {
            parkedCars.push(tempStack.top());
            tempStack.pop();
        }
        return found;
    }
    
    bool isFull() {
        return parkedCars.size() >= static_cast<size_t>(capacity);
    }
};

class ParkingLot {
private:
    int floorCapacity;
    queue<int> entryQueue;
    vector<Floor> floors;
    list<int> overflowWaitlist;
    vector<Car> parkedCars;

public:
    ParkingLot(int numFloors, int floorCap) : floorCapacity(floorCap) {
        if(numFloors<1 || numFloors>100 || floorCap<1 || floorCap>1000)throw invalid_argument("Invalid parking capacity");
        for (int i = 0; i < numFloors; i++) {
            floors.push_back(Floor(i + 1, floorCap));
        }
    }
    
    void enterCar(int carId) {
        if(carId<=0 || any_of(parkedCars.begin(),parkedCars.end(),[carId](const Car& car){return car.carId==carId;}) || find(overflowWaitlist.begin(),overflowWaitlist.end(),carId)!=overflowWaitlist.end()){cout<<"Duplicate or invalid car\n";return;}
        entryQueue.push(carId);
        assignCarToFloor();
    }
    
    void assignCarToFloor() {
        while (!entryQueue.empty()) {
            int carId = entryQueue.front();
            bool parked = false;
            
            for (size_t i = 0; i < floors.size(); i++) {
                if (!floors[i].isFull()) {
                    floors[i].addCar(carId);
                    parkedCars.push_back(Car(carId, i + 1, floors[i].parkedCars.size()));
                    cout << "Car " << carId << " parked on floor " << (i + 1) << ".\n";
                    entryQueue.pop();
                    parked = true;
                    break;
                }
            }
            
            if (!parked) {
                overflowWaitlist.push_back(carId);
                entryQueue.pop();
                cout << "Parking Full! Car " << carId << " added to waitlist.\n";
            }
        }
    }
    
    void exitCar(int carId) {
        for (auto it = parkedCars.begin(); it != parkedCars.end(); ++it) {
            if (it->carId == carId) {
                int floorNum = it->floorNo - 1;
                if (floors[floorNum].removeCar(carId)) {
                    cout << "Car " << carId << " exited from floor " << (floorNum + 1) << ".\n";
                    parkedCars.erase(it);
                    assignCarFromWaitlist();
                    return;
                }
            }
        }
        cout << "Car " << carId << " not found in parking lot.\n";
    }
    
    void assignCarFromWaitlist() {
        while (!overflowWaitlist.empty() && std::any_of(floors.begin(), floors.end(), [](Floor& floor){return !floor.isFull();})) {
            int carId = overflowWaitlist.front();
            overflowWaitlist.pop_front();
            entryQueue.push(carId);
            assignCarToFloor();
        }
    }
    
    void displayStatus() {
        cout << "\n==== Parking Lot Status ====" << endl;
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
        cout << "Entry Queue: ";
        queue<int> tempQueue = entryQueue;
        while (!tempQueue.empty()) {
            cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        cout << "\nOverflow Waitlist: ";
        for (int car : overflowWaitlist) {
            cout << car << " ";
        }
        cout << "\n";
    }
};

int main() {
    ParkingLot parkingLot(2, 3);
    
    parkingLot.enterCar(101);
    parkingLot.enterCar(102);
    parkingLot.enterCar(103);
    parkingLot.enterCar(104);
    parkingLot.enterCar(105);
    parkingLot.enterCar(106);
    parkingLot.enterCar(107);
    
    parkingLot.displayStatus();
    
    parkingLot.exitCar(103);
    parkingLot.exitCar(102);
    
    parkingLot.displayStatus();
    
    return 0;
}
