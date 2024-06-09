// SENG1120 - key_value_pair.cpp
// -----------------------------------------------
// A simple key value pair where objects are 
// compared by key
//
// Author: Kyle Harrison  04/08/2023
// -----------------------------------------------

#include "key_value_pair.h"

key_value_pair::key_value_pair(int key_, const std::string& value_)
{
	key = key_;
	value = value_;	
}

// empty destructor
key_value_pair::~key_value_pair()
{
	// no object clean up required
}

// Mutator methods (setters)
void key_value_pair::set_value(const std::string& value_) 
{
	value = value_;
}

void key_value_pair::set_key(const int key_)
{ 
	key = key_;
}

// Accessor methods (getters)
const std::string& key_value_pair::get_value() const 
{
	return value;
}

int key_value_pair::get_key() const 
{
	return key;
}

// overloaded ostream operator
std::ostream& operator <<(std::ostream& out, const key_value_pair& kvp)
{
    out << "(" << kvp.get_key() << ": " << kvp.get_value() << ")";
    return out;
}

// overloaded == operator
bool operator ==(const key_value_pair& s1, const key_value_pair& s2)
{
    return s1.get_key() == s2.get_key();
}

// overloaded != operator
bool operator !=(const key_value_pair& s1, const key_value_pair& s2)
{
    return s1.get_key() != s2.get_key();
}

// overloaded < operator
bool operator <(const key_value_pair& s1, const key_value_pair& s2)
{
    return s1.get_key() < s2.get_key();
}

// overloaded > operator
bool operator >(const key_value_pair& s1, const key_value_pair& s2)
{
    return s1.get_key() > s2.get_key();
}
