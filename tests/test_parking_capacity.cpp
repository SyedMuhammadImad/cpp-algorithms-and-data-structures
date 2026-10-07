#define main example_main
#include "../additional_sources/ds/practice/dsa theory lab task.cpp"
#undef main
#include <cassert>
#include <sstream>
int main(){ParkingLot lot;std::ostringstream output;auto* previous=std::cout.rdbuf(output.rdbuf());
 for(int i=0;i<106;++i)lot.addCar({"TEST"+std::to_string(i),i});assert(lot.parkedCount()==6&&lot.waitingCount()==100);
 lot.addCar({"TEST0",0});lot.addCar({"TEST6",6});lot.addCar({"OVERFLOW",0});assert(lot.parkedCount()==6&&lot.waitingCount()==100);
 lot.removeCar("MISSING");assert(lot.parkedCount()==6&&lot.waitingCount()==100);
 lot.removeCar("TEST0");assert(lot.parkedCount()==6&&lot.waitingCount()==99);
 lot.removeCar("TEST6");assert(lot.parkedCount()==6&&lot.waitingCount()==98);
 for(int i=1;i<106;++i)lot.removeCar("TEST"+std::to_string(i));assert(lot.parkedCount()==0&&lot.waitingCount()==0);
 std::cout.rdbuf(previous);
}
