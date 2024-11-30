#pragma once
#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <string>
using namespace std;

class Team {
public:
	static Team& getInstance() {
		static Team instance;
		return instance;
	}

	void setName(const string& name) { m_name = name; }
	void setCoach(const string& coach) { m_coach = coach; }
	void setCity(const string& city) { m_city = city; }
	void setHomeArena(const string& arena) { m_homeArena = arena; }
	string getName() { return m_name; }
	string getCoach() { return m_coach; }
	string getCity() { return m_city; }
	string getHomeArena() { return m_homeArena; }

	void printTeamInfo() const {
		cout << "Team Name: " << m_name << '\n';
		cout << "Coach: " << m_coach << '\n';
		cout << "City: " << m_city << '\n';
		cout << "Home Arena: " << m_homeArena << '\n';
	}

private:
	Team() {}
	string m_name;
	string m_coach;
	string m_city;
	string m_homeArena;
};

#endif // TEAM_H