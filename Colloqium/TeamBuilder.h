#pragma once
#ifndef TEAM_BUILDER_H
#define TEAM_BUILDER_H

#include <string>
#include "Team.h"

class TeamBuilder {
public:
    void setName(const string& name) {
        m_name = name;
    }

    void setCoach(const string& coach) {
        m_coach = coach;
    }

    void setHomeArena(const string& arena) {
        m_homeArena = arena;
    }

    void setCity(const string& city) {
        m_city = city;
    }

    Team build() {
        Team& team = Team::getInstance();
        team.setName(m_name);
        team.setCoach(m_coach);
        team.setCity(m_city);
        team.setHomeArena(m_homeArena);
        return team;
    }

private:
    string m_name;
    string m_coach;
    string m_city;
    string m_homeArena;
};

#endif // TEAM_BUILDER_H