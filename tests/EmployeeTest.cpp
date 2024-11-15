#include "pch.h"
#include "D:\pois\Project8\Project8\Employee.cpp"
#include "D:\pois\Project8\Project8\Employee.h"

TEST(EmployeeTest, GetName) {
    // Создаем экземпляр класса Employee
    Employee employee("John", 28);

    // Проверяем, что getname возвращает правильное имя
    EXPECT_EQ(employee.getname(), "John");
}

// Тест для метода introduce
TEST(EmployeeTest, IntroduceOutput) {
    // Создаем экземпляр класса Employee
    Employee employee("John", 28);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    employee.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода introduce
    std::string expected_output = "Employee: John,Age: 28";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}