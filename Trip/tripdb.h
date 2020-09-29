#ifndef __TRIPDB_H
#define __TRIPDB_H

#include "FlightTrip.h"
#include<list>
class tripdb {

    std::list<FlightTrip>trips;
  public:
    void addTrip(std::string,std::string,std::string,std::string,double);
    FlightTrip* findTripById(std::string);
    int countAll();
    int countTripsByOperator(std::string);
    void removeTrip(std::string);
    double computeMaxFare();
    double computeMinTravelTime();
    // int countTripsByOperator(std::string);



};
#endif
