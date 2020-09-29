#include "FlightTrip.h"
#include<iostream>
using namespace std;

FlightTrip::FlightTrip():Trip() {
    m_FlightNumber="";
    m_Operator="";
    m_Miles=0;

}

FlightTrip::FlightTrip(std::string scity,std::string dcity,std::string fnumber,std::string operator1,double miles):Trip(scity,dcity) {

    m_FlightNumber=fnumber;
    m_Operator=operator1;
    m_Miles=miles;
}
double FlightTrip::computeFare() {

    double Fare = m_Miles*inr;
    return Fare;


}

double FlightTrip::computeTravelTime() {

    double Time=m_Miles*0.12;

    return Time;
}

std::string FlightTrip::getFlightNumber() {

    return m_FlightNumber;

}

std::string FlightTrip::getOperator() {

    return m_Operator;
}

double FlightTrip::getDistance() {

    return m_Miles;
}




