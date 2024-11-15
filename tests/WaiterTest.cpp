#include "pch.h"
#include "D:\pois\Project8\Project8\Waiter.h"
#include "D:\pois\Project8\Project8\Waiter.cpp" 

TEST(WaiterTest, TakeOrderWithChef) {
    // ������� ���-������ Chef � ������ Waiter � ��������� �� Chef
    Chef chef("Gordon", 45, "Italian Cuisine", "Pasta");
    Waiter waiter("John", 28, 5, &chef);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    waiter.takeOrder("Spaghetti Bolognese");
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ takeOrder � �������������� Chef
    std::string expected_output =
        "Waiter John is taking order: 'Spaghetti Bolognese' for table 5.\n"
        "Waiter informs Chef Gordon about the order.\n"
        "Chef Gordon,Age:45 is cooking Pasta\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ takeOrder, ����� Chef �����������
TEST(WaiterTest, TakeOrderWithoutChef) {
    // ������� ������ Waiter ��� �������� Chef
    Waiter waiter("John", 28, 5, nullptr);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    waiter.takeOrder("Spaghetti Bolognese");
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ takeOrder ��� ��������������� Chef
    std::string expected_output = "Waiter John is taking order: 'Spaghetti Bolognese' for table 5.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}