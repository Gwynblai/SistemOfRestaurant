#include "pch.h"
#include "D:\pois\Project8\Project8\Waiter.h"
#include "D:\pois\Project8\Project8\Waiter.cpp" 

TEST(WaiterTest, TakeOrderWithChef) {
    // Создаем мок-объект Chef и объект Waiter с указанием на Chef
    Chef chef("Gordon", 45, "Italian Cuisine", "Pasta");
    Waiter waiter("John", 28, 5, &chef);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    waiter.takeOrder("Spaghetti Bolognese");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода takeOrder с присутствующим Chef
    std::string expected_output =
        "Waiter John is taking order: 'Spaghetti Bolognese' for table 5.\n"
        "Waiter informs Chef Gordon about the order.\n"
        "Chef Gordon,Age:45 is cooking Pasta\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода takeOrder, когда Chef отсутствует
TEST(WaiterTest, TakeOrderWithoutChef) {
    // Создаем объект Waiter без указания Chef
    Waiter waiter("John", 28, 5, nullptr);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    waiter.takeOrder("Spaghetti Bolognese");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода takeOrder без присутствующего Chef
    std::string expected_output = "Waiter John is taking order: 'Spaghetti Bolognese' for table 5.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}