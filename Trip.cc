#include "Trip.h"
#include<iostream>
using namespace std;

Trip::Trip():m_SourceCity(""),m_DestinationCity("") {};

Trip::Trip(std::string scity,std::string dcity):m_SourceCity(scity),m_DestinationCity(dcity) {};

std::string Trip::getOrigin() {

    return m_SourceCity;

}

std::string Trip::getDestination() {

    return m_DestinationCity;
}
