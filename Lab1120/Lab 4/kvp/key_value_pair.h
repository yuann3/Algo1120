// SENG1120 - key_value_pair.cpp
// -----------------------------------------------
// A simple key value pair where objects are 
// compared by key
//
// Author: Kyle Harrison  04/08/2023
// -----------------------------------------------

#ifndef SENG1120_KVP_H
#define SENG1120_KVP_H

#include <string>
#include <iostream>

class key_value_pair
{
public:
	// Constructor
	key_value_pair(const int, const std::string&);

	// Destructor
	~key_value_pair();

	// Setters
	void set_key (const int);
	void set_value (const std::string&);

	// Getters
	int get_key() const;
	const std::string& get_value() const;

private:
	int key;
	std::string value; 
};

// Non Member functions
std::ostream& operator <<(std::ostream&, const key_value_pair&);
bool operator ==(const key_value_pair&, const key_value_pair&);
bool operator !=(const key_value_pair&, const key_value_pair&);
bool operator <(const key_value_pair&, const key_value_pair&);
bool  operator >(const key_value_pair&, const key_value_pair&);

#endif