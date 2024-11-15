#include "pch.h"
#include "D:\pois\Project8\Project8\Cashier.h"
#include "D:\pois\Project8\Project8\Cashier.cpp"

TEST(CashierTest, IntroduceOutput) {
    // ������� ��������� ������ Cashier
    Cashier cashier("Lily", 29, 2, 8);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    cashier.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ introduce
    std::string expected_output = "Cashier Lily, age 29, Shift: 2, Work Hours: 8\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ processPayment
TEST(CashierTest, ProcessPaymentOutput) {
    // ������� ��������� ������ Cashier
    Cashier cashier("Lily", 29, 2, 8);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    cashier.processPayment(150.75);
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ processPayment
    std::string expected_output = "Cashier Lily processed a payment of $150.75.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}