#ifndef __FLIGHTTRIP_H
#define __FLIGHTTRIP_H
#include "Trip.h"

#include<iostream>
using namespace std;

class FlightTrip : public Trip {

    std::string m_FlightNumber;
    std::string m_Operator;
    double inr=10;
    //double minutes=60;
    // double milesclaculate=500/60;
    double m_Miles;
  public:
    FlightTrip();
    FlightTrip(std::string,std::string,std::string,std::string,double);
    double computeFare() override;
    double computeTravelTime() override;
    std::string getFlightNumber();
    std::string getOperator();
    double getDistance();
};
#endif // __FLIGHTTRIP_H


