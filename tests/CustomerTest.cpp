#include "pch.h"
#include "D:\pois\Project8\Project8\Customer.h"
#include "D:\pois\Project8\Project8\Customer.cpp"

TEST(CustomerTest, AddToOrderOutput) {
    // Создаем мок-объект Waiter и экземпляр класса Customer
    Waiter waiter("John", 25, 5, nullptr);
    Customer customer("Alice", "Smith", &waiter); 
   

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    customer.addToOrder("Pasta", 12.5);
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода addToOrder
    std::string expected_output =
        "Alice ordered: Pasta ($12.5)\n"
        "Waiter John is taking order: 'Pasta' for table 5.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода displayself
TEST(CustomerTest, DisplaySelfOutput) {
    // Создаем экземпляр класса Customer
    Customer customer("Alice", "Smith", nullptr);

    // Добавляем несколько заказов
    customer.addToOrder("Pasta", 12.5);
    customer.addToOrder("Salad", 5.0);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    customer.displayself();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода displayself
    std::string expected_output =
        "Customer Name: Alice, Last name: Smith\n"
        "Current order: Pasta Salad \n"
        "Total Bill: $17.5\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода addToOrder без Waiter
TEST(CustomerTest, AddToOrderNoWaiter) {
    // Создаем экземпляр класса Customer без Waiter
    Customer customer("Alice", "Smith", nullptr);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    customer.addToOrder("Soup", 8.0);
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода addToOrder без взаимодействия с Waiter
    std::string expected_output = "Alice ordered: Soup ($8)\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}