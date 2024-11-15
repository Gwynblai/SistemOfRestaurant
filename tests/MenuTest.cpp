#include "pch.h"
#include "D:\pois\Project8\Project8\Menu.h"
#include "D:\pois\Project8\Project8\Menu.cpp"


TEST(MenuTest, AddAndDisplayMenu) {
    // ������� ��������� ������ Menu � ������ ����
    Menu menu("Dinner");

    // ��������� �������� � ����
    menu.addItem("Pasta");
    menu.addItem("Salad");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ displayMenu
    std::string expected_output =
        "Dinner Menu:\n"
        "- Pasta\n"
        "- Salad\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ displayMenu � ������ ����
TEST(MenuTest, DisplayEmptyMenu) {
    // ������� ������ ����
    Menu menu("Lunch");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������� ����
    std::string expected_output = "Lunch Menu:\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}