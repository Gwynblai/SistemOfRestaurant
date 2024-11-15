#include "pch.h"
#include "D:\pois\Project8\Project8\Manager.h"
#include "D:\pois\Project8\Project8\Manager.cpp"

TEST(ManagerTest, IntroduceOutput) {
    // Создаем экземпляр класса Manager
    Manager manager("Sophia", 40, 15, "Sales");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    manager.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода introduce
    std::string expected_output = "Manager Sophia, age 40, Experience: 15, Department: Sales\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода assignTask
TEST(ManagerTest, AssignTaskOutput) {
    // Создаем экземпляр класса Manager
    Manager manager("Sophia", 40, 15, "Sales");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    manager.assignTask("Prepare sales report", "Alice");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода assignTask
    std::string expected_output = "Manager Sophia assigns task: 'Prepare sales report' to Alice.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода manageStaff
TEST(ManagerTest, ManageStaffOutput) {
    // Создаем экземпляр класса Manager
    Manager manager("Sophia", 40, 15, "Sales");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    manager.manageStaff();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода manageStaff
    std::string expected_output = "Manager Sophia is managing the staff in the Sales department.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}