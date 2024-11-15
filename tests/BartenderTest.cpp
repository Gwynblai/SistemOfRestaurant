#include "pch.h"
#include "D:\pois\Project8\Project8\Bartender.h"
#include "D:\pois\Project8\Project8\Bartender.cpp"

TEST(BartenderTest, IntroduceOutput) {
    // Создаем экземпляр класса Bartender
    Bartender bartender("Max", 35, "Cocktail");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    bartender.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода introduce
    std::string expected_output = "Bartender Max, Age: 35\nBar Specialty: Cocktail\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода mixDrinks
TEST(BartenderTest, MixDrinksOutput) {
    // Создаем экземпляр класса Bartender
    Bartender bartender("Max", 35, "Cocktail");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    bartender.mixDrinks();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода mixDrinks
    std::string expected_output = "Max is mixing a Cocktail drink.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода serveCustomer
TEST(BartenderTest, ServeCustomerOutput) {
    // Создаем экземпляр класса Bartender
    Bartender bartender("Max", 35, "Cocktail");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    bartender.serveCustomer();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода serveCustomer
    std::string expected_output = "Max is serving drinks to customers at the bar.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}