// JsonParse_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
/// 
const int ARRSIZE = 100;
const string DATA_FILE_PATH = "TestData\\";
////////////////////////////
class JsonParser
{
	// Work here!
};
///////////////// Testing ////////////////////////////////
TEST_CASE("Testing my JSON Parser")
{

	SUBCASE("testing parsing of empty JSON object")
	{
		// Write unit tests here...
	}
	SUBCASE("testing parsing of simple JSON object (only strings for values)")
	{
		// Write unit tests here...
	}
}
