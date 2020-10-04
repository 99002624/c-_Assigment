#ifndef __TRIP_H
#define __TRIP_H
#include<iostream>
using namespace std;

class Trip {

    std::string m_SourceCity;
    std::string m_DestinationCity;
  public:
    Trip();
    Trip(std::string,std::string);
    virtual double computeFare()=0;
    virtual double computeTravelTime()=0;
    std::string getOrigin();
    std::string getDestination();


};
#endif // __TRIP_H
