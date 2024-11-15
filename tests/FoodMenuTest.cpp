#include "pch.h"

#include "D:\pois\Project8\Project8\FoodMenu.h"
#include "D:\pois\Project8\Project8\FoodMenu.cpp"


TEST(FoodMenuTest, DisplayMenuOutput) { 
    // Создаем экземпляр меню и добавляем элементы
    FoodMenu menu;

    menu.addItem("Burger", 9.99);
    menu.addItem("Pizza", 12.50);

    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода
    std::string expected_output = "Food Menu: Burger ($9.99), Pizza ($12.5)";   

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

