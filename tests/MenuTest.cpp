#include "pch.h"
#include "D:\pois\Project8\Project8\Menu.h"
#include "D:\pois\Project8\Project8\Menu.cpp"


TEST(MenuTest, AddAndDisplayMenu) {
    // Создаем экземпляр класса Menu с именем меню
    Menu menu("Dinner");

    // Добавляем элементы в меню
    menu.addItem("Pasta");
    menu.addItem("Salad");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода displayMenu
    std::string expected_output =
        "Dinner Menu:\n"
        "- Pasta\n"
        "- Salad\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода displayMenu с пустым меню
TEST(MenuTest, DisplayEmptyMenu) {
    // Создаем пустое меню
    Menu menu("Lunch");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для пустого меню
    std::string expected_output = "Lunch Menu:\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}