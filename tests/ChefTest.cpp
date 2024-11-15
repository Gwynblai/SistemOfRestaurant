#include "pch.h"
#include "D:\pois\Project8\Project8\Chef.h"
#include "D:\pois\Project8\Project8\Chef.cpp"


TEST(ChefTest, CookOutput) {
    // ������� ��������� ������ Chef
    Chef chef("Alice", 30, "Italian Cuisine", "Pasta");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    chef.cook();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������
    std::string expected_output = "Chef Alice,Age:30 is cooking Pasta\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ introduce
TEST(ChefTest, IntroduceOutput) {
    // ������� ��������� ������ Chef
    Chef chef("Alice", 30, "Italian Cuisine", "Pasta");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    chef.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������
    std::string expected_output = "Chef Alice, Specialty: Italian Cuisine\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}