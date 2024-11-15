#include "pch.h"
#include "D:\pois\Project8\Project8\Host.h"
#include "D:\pois\Project8\Project8\Host.cpp"


TEST(HostTest, GreetCustomerFormal) {
    // Создаем экземпляр класса Host с формальным стилем приветствия (greetingStyle = 0)
    Host host("James", 25, 0, 1);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    host.greetCustomer();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для формального приветствия
    std::string expected_output = "Host James: Welcome to our restaurant. Please follow me to your table.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода greetCustomer с дружелюбным стилем приветствия
TEST(HostTest, GreetCustomerFriendly) {
    // Создаем экземпляр класса Host с дружелюбным стилем приветствия (greetingStyle = 1)
    Host host("James", 25, 1, 1);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    host.greetCustomer();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для дружелюбного приветствия
    std::string expected_output = "Host James: Hi! So glad you're here! I'll show you to your table!\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода introduce
TEST(HostTest, IntroduceOutput) {
    // Создаем экземпляр класса Host с формальным стилем приветствия
    Host host("James", 25, 0, 2);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    host.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода introduce
    std::string expected_output = "Host James, Age: 25, Assigned Area: 2, Greeting Style: Formal\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}