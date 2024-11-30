#include <iostream>
#include "TeamBuilder.h"
#include <cassert>

void testTeamBuilder() {
    // ������� ������ ������ TeamBuilder
    TeamBuilder builder;

    // ������������� �������� ������� �������
    builder.setName("Failed Test");
    builder.setCoach("Failed Test");
    builder.setCity("Failed Test");
    builder.setHomeArena("Failed Test");

    // �������� ����� build() � �������� ������ �������
    Team team = builder.build();

    // ���������, ��� �������� ������� ������� ���� ����������� ���������
    assert(team.getName() == "Test Team");
    assert(team.getCoach() == "Test Coach");
    assert(team.getCity() == "Test City");
    assert(team.getHomeArena() == "Test Arena");
    cout << "Tests Completed fine";
}

int main() {
    testTeamBuilder();
    return 0;
}