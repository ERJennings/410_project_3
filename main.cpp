/*
 * main.cpp
 *
 *  Created on: Nov 18, 2020
 *      Author: eric
 */

#include "tester.h"
#include "print_ts.h"

int main() {
	//word,number of threads,number per line,number to print per thread,millisecond delay
	startThreads("word",3,P4,2,777);
	joinThreads();
}


