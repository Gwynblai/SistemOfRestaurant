#include "pch.h"
#include "D:\pois\Project8\Project8\Chef.h"
#include "D:\pois\Project8\Project8\Chef.cpp"


TEST(ChefTest, CookOutput) {
    // Создаем экземпляр класса Chef
    Chef chef("Alice", 30, "Italian Cuisine", "Pasta");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    chef.cook();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода
    std::string expected_output = "Chef Alice,Age:30 is cooking Pasta\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода introduce
TEST(ChefTest, IntroduceOutput) {
    // Создаем экземпляр класса Chef
    Chef chef("Alice", 30, "Italian Cuisine", "Pasta");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    chef.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода
    std::string expected_output = "Chef Alice, Specialty: Italian Cuisine\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}