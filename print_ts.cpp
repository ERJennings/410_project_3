/*
 * print_ts.cpp
 *
 *  Created on: Nov 17, 2020
 *      Author: eric
 */


#include "print_ts.h"
#include "tester.h"
#include <mutex>
#include <iostream>
#include <thread>

using namespace std;

//For reference:
//"Mutexes to Synchronize Threads" on course site
//Also "Simple Condition Variables"

mutex m;

void PRINT1(std::string &txt) {

	//Like this:
	//cout<<"You are overdrawn"<<endl;
	//but with more spacing because no one can read this all smashed together

	m.lock();
	cout << txt << endl;
	m.unlock();
}

void PRINT2(std::string &txt, std::string &txt1) {
	m.lock();
	cout << txt << txt1 << endl;
	m.unlock();
}

void PRINT3(std::string &txt, std::string &txt1, std::string &txt2) {
	m.lock();
	cout << txt << txt1 << txt2 << endl;
	m.unlock();
}

void PRINT4(std::string &txt, std::string &txt1, std::string &txt2, std::string &txt3) {
	m.lock();
	cout << txt << txt1 << txt2 << txt3 << endl;
	m.unlock();
}

void PRINT5(std::string &txt, std::string &txt1, std::string &txt2, std::string &txt3, std::string &txt4) {
	cout << txt << txt1 << txt2 << txt3 << txt4 << endl;
}
