#include "tripdb.h"

void tripdb:: addTrip(std::string scity,std::string dcity,std::string fnumber,std::string operator1,double miles) {

    trips.push_back(FlightTrip(scity,dcity,fnumber,operator1,miles));

}
int tripdb::countAll() {

    int count1=0;
    std::list<FlightTrip>::iterator iter;
    for(iter=trips.begin(); iter!=trips.end(); ++iter) {

        count1++;

    }
    return count1;

}

int tripdb::countTripsByOperator(std::string ope) {

    int count2=0;
    std::list<FlightTrip>::iterator iter;

    for(iter=trips.begin(); iter!=trips.end(); ++iter) {

        if(iter->getOperator()==ope) {

            count2++;
        }
    }
    return count2;



}

void tripdb::removeTrip(std::string id) {

    std::list<FlightTrip>::iterator iter;
    for(iter=trips.begin(); iter!=trips.end(); ++iter)
        if(iter->getFlightNumber()==id)
            break;
    if(iter!=trips.end())
        trips.erase(iter);

}

double tripdb::computeMaxFare() {


    std::list<FlightTrip>::iterator iter;
    double count3=0;
    for(iter=trips.begin(); iter!=trips.end(); ++iter) {
        if(iter->computeFare()>count3) {
            count3=iter->computeFare();

        }


    }
    return count3;





    //return count3;



}


double tripdb::computeMinTravelTime() {

    std::list<FlightTrip>::iterator iter=trips.begin();
    double count4=iter->computeTravelTime();
    ++iter;
    for(; iter!=trips.end(); ++iter) {
        //count4=iter->computeTravelTime();
        if(iter->computeTravelTime()<count4) {
            count4=iter->computeTravelTime();

        }


    }
    return count4;
}


FlightTrip* tripdb::findTripById(std::string id) {

    std::list<FlightTrip>::iterator iter;
    for(iter=trips.begin(); iter!=trips.end(); ++iter)
        if(iter->getFlightNumber()==id)
            return &(*iter);
    return NULL;

}
