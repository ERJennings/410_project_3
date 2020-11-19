/*
 * tester.cpp
 *
 *  Created on: Nov 17, 2020
 *      Author: eric
 */

#include "tester.h"
#include "print_ts.h"
#include <vector>
#include <thread>
#include <iostream>
using namespace std;

std::vector<thread> thds;
bool cancel;

void startThreads(std::string s, int numThreads, WHICH_PRINT wp, int numTimesToPrint, int millisecond_delay) {

	//For reference from course site:
	//"Making all threads start at the same time using Condition Variables" main method
	//Simple producer consumer problem. Producer signals consumer
	//Need to use helper method like this for printing

	for (int i = 0; i < numThreads; i++) {
		//thds.push_back( thread(fun1,pad));
		//why is this causing an error?
		thds.push_back(thread(printingFunction,s,wp,numTimesToPrint));
	}

	//need to use delay somehow

}

void setCancelThreads(bool bCancel) {
	cancel = bCancel;
}

void joinThreads() {
	for (int i = 0; i < thds.size(); i++) {
		thds.at(i).join();
	}
}

void printingFunction(std::string s, WHICH_PRINT wp, int numTimesToPrint) {
	for (int i =  0; i < numTimesToPrint; i++) {

		if (wp == P1) {
			PRINT1(s);
		}

		else if (wp == P2) {
			PRINT2(s,s);
		}

		else if (wp == P3) {
			PRINT3(s,s,s);
		}

		else if (wp == P4) {
			PRINT4(s,s,s,s);
		}

		else {
			PRINT5(s,s,s,s,s);
		}
	}
}
