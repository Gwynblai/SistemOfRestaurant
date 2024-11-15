#include "pch.h"
#include "D:\pois\Project8\Project8\Owner.h"
#include "D:\pois\Project8\Project8\Owner.cpp"

TEST(OwnerTest, DisplaySelfOutput) {
    // Создаем экземпляр класса Owner
    Owner owner("Alice", "Johnson", 50000.0, nullptr);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    owner.displayself();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода displayself
    std::string expected_output = "Owner:AliceJohnson,Capital: 50000\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода reviewCashierPerformance с действующим Cashier
TEST(OwnerTest, ReviewCashierPerformanceWithCashier) {
    // Создаем мок-объект Cashier и экземпляр Owner с указанием Cashier
    Cashier cashier("Tom", 30, 1, 8);
    Owner owner("Alice", "Johnson", 50000.0, &cashier);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    owner.reviewCashierPerformance();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода reviewCashierPerformance
    std::string expected_output = "Owner Alice is reviewing cashier Tom's performance and payment processing history.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода reviewCashierPerformance без Cashier
TEST(OwnerTest, ReviewCashierPerformanceWithoutCashier) {  
    // Создаем экземпляр класса Owner без Cashier
    Owner owner("Alice", "Johnson", 50000.0, nullptr);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    owner.reviewCashierPerformance();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод — пустой, так как cashier == nullptr
    std::string expected_output = "";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}