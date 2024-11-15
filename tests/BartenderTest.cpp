#include "pch.h"
#include "D:\pois\Project8\Project8\Bartender.h"
#include "D:\pois\Project8\Project8\Bartender.cpp"

TEST(BartenderTest, IntroduceOutput) {
    // ������� ��������� ������ Bartender
    Bartender bartender("Max", 35, "Cocktail");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    bartender.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ introduce
    std::string expected_output = "Bartender Max, Age: 35\nBar Specialty: Cocktail\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ mixDrinks
TEST(BartenderTest, MixDrinksOutput) {
    // ������� ��������� ������ Bartender
    Bartender bartender("Max", 35, "Cocktail");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    bartender.mixDrinks();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ mixDrinks
    std::string expected_output = "Max is mixing a Cocktail drink.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ serveCustomer
TEST(BartenderTest, ServeCustomerOutput) {
    // ������� ��������� ������ Bartender
    Bartender bartender("Max", 35, "Cocktail");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    bartender.serveCustomer();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ serveCustomer
    std::string expected_output = "Max is serving drinks to customers at the bar.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}