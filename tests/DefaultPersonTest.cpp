#include "pch.h"
#include "D:\pois\Project8\Project8\DefaultPerson.h"
#include "D:\pois\Project8\Project8\DefaultPerson.cpp"

// Тест для метода getName
TEST(DefaultPersonTest, GetName) { 
    // Создаем экземпляр класса DefaultPerson
    DefaultPerson person("John", "Doe");

    // Проверяем, что getName возвращает имя, которое было задано в конструкторе
    EXPECT_EQ(person.getName(), "John");
}

// Тест для метода displayself
TEST(DefaultPersonTest, DisplaySelfOutput) {
    // Создаем экземпляр класса DefaultPerson
    DefaultPerson person("John", "Doe");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    person.displayself();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода
    std::string expected_output = "Name: John,LastName: Doe\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}