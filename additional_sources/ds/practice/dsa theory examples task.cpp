#include <iostream>
#include <string>

const int MAX_FLOORS = 3;
const int MAX_CARS_PER_FLOOR = 2;

struct Car {
    std::string licensePlate;
    int entryTime;
};

class ParkingLot {
private:
    Car floors[MAX_FLOORS][MAX_CARS_PER_FLOOR];
    int floorCount[MAX_FLOORS] = {0};
    Car overflowWaitlist[100];
    int overflowCount = 0;

public:
    void addCar(const Car& car) {
        if(car.licensePlate.empty() || car.licensePlate.size()>64 || car.entryTime<0){std::cout<<"Invalid car\n";return;}
        for(int i=0;i<MAX_FLOORS;++i)for(int j=0;j<floorCount[i];++j)if(floors[i][j].licensePlate==car.licensePlate){std::cout<<"Duplicate car\n";return;}
        for(int i=0;i<overflowCount;++i)if(overflowWaitlist[i].licensePlate==car.licensePlate){std::cout<<"Duplicate car\n";return;}

        for (int i = 0; i < MAX_FLOORS; ++i) {
            if (floorCount[i] < MAX_CARS_PER_FLOOR) {
                floors[i][floorCount[i]++] = car;
                std::cout << "Car " << car.licensePlate << " parked on floor " << i + 1 << ".\n";
                return;
            }
        }
        if(overflowCount>=100){std::cout<<"Overflow waitlist is full\n";return;}
        overflowWaitlist[overflowCount++] = car;
        std::cout << "Parking full. Car " << car.licensePlate << " added to overflow waitlist.\n";
    }

    void removeCar(const std::string& licensePlate) {
        for (int i = 0; i < MAX_FLOORS; ++i) {
            for (int j = 0; j < floorCount[i]; ++j) {
                if (floors[i][j].licensePlate == licensePlate) {
                    std::cout << "Car " << licensePlate << " removed from floor " << i + 1 << ".\n";
                    for (int k = j; k < floorCount[i] - 1; ++k) {
                        floors[i][k] = floors[i][k + 1];
                    }
                    floorCount[i]--;
                    moveCarFromWaitlist();
                    return;
                }
            }
        }
        std::cout << "Car " << licensePlate << " not found.\n";
    }

    int waitingCount()const{return overflowCount;}
    int parkedCount()const{int result=0;for(int count:floorCount)result+=count;return result;}
    void displayStatus() {
        std::cout << "Parking Lot Status:\n";
        for (int i = 0; i < MAX_FLOORS; ++i) {
            std::cout << "Floor " << i + 1 << ": ";
            for (int j = 0; j < floorCount[i]; ++j) {
                std::cout << floors[i][j].licensePlate << " ";
            }
            std::cout << "\n";
        }

        std::cout << "Cars in Overflow Waitlist: ";
        for (int i = 0; i < overflowCount; ++i) {
            std::cout << overflowWaitlist[i].licensePlate << " ";
        }
        std::cout << "\n";
    }

private:
    void moveCarFromWaitlist() {
        if (overflowCount > 0) {
            Car car = overflowWaitlist[0];
            for (int i = 1; i < overflowCount; ++i) {
                overflowWaitlist[i - 1] = overflowWaitlist[i];
            }
            overflowCount--;
            addCar(car);
        }
    }
};

int main() {
    ParkingLot parkingLot;

    parkingLot.addCar({"ABC123", 1});
    parkingLot.addCar({"XYZ789", 2});
    parkingLot.addCar({"LMN456", 3});
    parkingLot.addCar({"DEF321", 4});

    parkingLot.displayStatus();

    parkingLot.removeCar("XYZ789");
    parkingLot.displayStatus();

    parkingLot.addCar({"GHI654", 5});
    parkingLot.displayStatus();

    return 0;
}
