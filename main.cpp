/*
 * main.cpp
 *
 *  Created on: Nov 18, 2020
 *      Author: eric
 */

#include "tester.h"
#include "print_ts.h"

int main() {
	startThreads("word",6,P5,8,777);
	joinThreads();
}


