//
/*
 * event.h
 *
 * Class Description: Models a bank customer.
 * Class Invariant: Each customer has a Type, Time, and Length
 *
 * Last modified on: June 25 2017
 * Author: Damoon
 */

#ifndef UNTITLED_EVENT_H
#define UNTITLED_EVENT_H
//#pragma once
#include <string>
using namespace std;

class Event {


private:
    char type; 	// type of event, A for arrival or D for Departure
    int Time; 	// a 2 digit integer showing the time, maybe minutes
    int length; // length of the transaction
public:

// setters:
//	default constructor.
// Descriptions: creates a patient
// postconditions: default will set type to A, time to current time, and length to 0
    Event();


    ~Event();




// getters:

};


#endif //UNTITLED_EVENT_H
