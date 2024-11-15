#include "pch.h"
#include "D:\pois\Project8\Project8\ChefSupplier.h"
#include "D:\pois\Project8\Project8\ChefSupplier.cpp"



TEST(ChefSupplierTest, CookAndSupplyOutput) {
    // ������� ��������� ������ ChefSupplier
    ChefSupplier chefSupplier("Gordon", 50, "Italian Cuisine", "Pasta", "SUP123");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    chefSupplier.cookAndSupply("Tomatoes", 50);
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ cookAndSupply
    std::string expected_output =
        "Chef Gordon,Age:50 is cooking Pasta\n"
        "SUP123 supplies 50 units of Tomatoes\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ planMenuAndOrderSupplies
TEST(ChefSupplierTest, PlanMenuAndOrderSuppliesOutput) {
    // ������� ��������� ������ ChefSupplier
    ChefSupplier chefSupplier("Gordon", 50, "Italian Cuisine", "Pasta", "SUP123");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    chefSupplier.planMenuAndOrderSupplies("Lasagna", "Cheese", 30);
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ planMenuAndOrderSupplies
    std::string expected_output =
        "Planning menu for today with dish: Lasagna\n"
        "Ordering supplies...\n"
        "SUP123 supplies 30 units of Cheese\n"
        "Ingredients for Lasagna have been ordered.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}