#include "pch.h"

#include "D:\pois\Project8\Project8\FoodMenu.h"
#include "D:\pois\Project8\Project8\FoodMenu.cpp"


TEST(FoodMenuTest, DisplayMenuOutput) { 
    // ������� ��������� ���� � ��������� ��������
    FoodMenu menu;

    menu.addItem("Burger", 9.99);
    menu.addItem("Pizza", 12.50);

    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������
    std::string expected_output = "Food Menu: Burger ($9.99), Pizza ($12.5)";   

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

