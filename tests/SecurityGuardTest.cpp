#include "pch.h"
#include "D:\pois\Project8\Project8\SecurityGuard.h" 
#include "D:\pois\Project8\Project8\SecurityGuard.cpp" 

TEST(SecurityGuardTest, IntroduceOutput) {
    // Создаем экземпляр класса SecurityGuard
    SecurityGuard guard("Alex", 35, "Night", true);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    guard.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода introduce
    std::string expected_output = "Security Guard Alex, Age: 35, Shift: Night, Armed: Yes\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода patrol
TEST(SecurityGuardTest, PatrolOutput) {
    // Создаем экземпляр класса SecurityGuard
    SecurityGuard guard("Alex", 35, "Night", true);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    guard.patrol();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода patrol
    std::string expected_output = "Security Guard Alex is patrolling during the Night shift.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}