#include <iostream>
#include "TeamBuilder.h"
#include <cassert>

void testTeamBuilder() {
    // Создаем объект класса TeamBuilder
    TeamBuilder builder;

    // Устанавливаем значения свойств команды
    builder.setName("Failed Test");
    builder.setCoach("Failed Test");
    builder.setCity("Failed Test");
    builder.setHomeArena("Failed Test");

    // Вызываем метод build() и получаем объект команды
    Team team = builder.build();

    // Проверяем, что значения свойств команды были установлены правильно
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