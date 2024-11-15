#include "pch.h"
#include "D:\pois\Project8\Project8\Supplier.h"
#include "D:\pois\Project8\Project8\Supplier.cpp"


TEST(SupplierTest, SupplyItemOutput) {
    // Создаем экземпляр класса Supplier
    Supplier supplier("S123");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    supplier.supplyItem("Apples", 20);
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода
    std::string expected_output = "S123 supplies 20 units of Apples\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

TEST(SupplierTest, DisplayInfoOutput) {
    // Создаем экземпляр класса Supplier
    Supplier supplier("S123");

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    supplier.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода
    std::string expected_output = "Supplier: S123\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}