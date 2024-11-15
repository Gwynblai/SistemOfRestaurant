#include "pch.h"
#include "D:\pois\Project8\Project8\Cashier.h"
#include "D:\pois\Project8\Project8\Cashier.cpp"

TEST(CashierTest, IntroduceOutput) {
    // Создаем экземпляр класса Cashier
    Cashier cashier("Lily", 29, 2, 8);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    cashier.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода introduce
    std::string expected_output = "Cashier Lily, age 29, Shift: 2, Work Hours: 8\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода processPayment
TEST(CashierTest, ProcessPaymentOutput) {
    // Создаем экземпляр класса Cashier
    Cashier cashier("Lily", 29, 2, 8);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    cashier.processPayment(150.75);
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода processPayment
    std::string expected_output = "Cashier Lily processed a payment of $150.75.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}