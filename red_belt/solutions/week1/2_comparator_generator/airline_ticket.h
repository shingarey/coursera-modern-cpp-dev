#pragma once

#include <iostream>
#include <string>
#include <tuple>

using namespace std;

struct Date
{
	int year, month, day;
};

struct Time
{
	int hours, minutes;
};

struct AirlineTicket
{
	string from;
	string to;
	string airline;
	Date departure_date;
	Time departure_time;
	Date arrival_date;
	Time arrival_time;
	int price;
};

bool operator<(const Date &lhs, const Date &rhs)
{
	return std::tie(lhs.year, lhs.month, lhs.day) < std::tie(rhs.year, rhs.month, rhs.day);
}

bool operator==(const Date &lhs, const Date &rhs)
{
	return std::tie(lhs.year, lhs.month, lhs.day) < std::tie(rhs.year, rhs.month, rhs.day);
}

std::ostream &operator<<(std::ostream &os, const Date &date)
{
	return os << date.year << ", " << date.month << ", " << date.day;
}

bool operator<(const Time &lhs, const Time &rhs)
{
	return std::tie(lhs.hours, lhs.minutes) < std::tie(rhs.hours, rhs.minutes);
}

bool operator==(const Time &lhs, const Time &rhs)
{
	return std::tie(lhs.hours, lhs.minutes) == std::tie(rhs.hours, rhs.minutes);
}

std::ostream &operator<<(std::ostream &os, const Time &time)
{
	return os << time.hours << time.minutes;
}