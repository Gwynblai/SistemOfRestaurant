#include "pch.h"
#include "D:\pois\Project8\Project8\Supplier.h"
#include "D:\pois\Project8\Project8\Supplier.cpp"


TEST(SupplierTest, SupplyItemOutput) {
    // ������� ��������� ������ Supplier
    Supplier supplier("S123");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    supplier.supplyItem("Apples", 20);
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������
    std::string expected_output = "S123 supplies 20 units of Apples\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

TEST(SupplierTest, DisplayInfoOutput) {
    // ������� ��������� ������ Supplier
    Supplier supplier("S123");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    supplier.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������
    std::string expected_output = "Supplier: S123\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}