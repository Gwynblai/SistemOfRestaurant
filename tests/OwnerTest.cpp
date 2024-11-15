#include "pch.h"
#include "D:\pois\Project8\Project8\Owner.h"
#include "D:\pois\Project8\Project8\Owner.cpp"

TEST(OwnerTest, DisplaySelfOutput) {
    // ������� ��������� ������ Owner
    Owner owner("Alice", "Johnson", 50000.0, nullptr);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    owner.displayself();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ displayself
    std::string expected_output = "Owner:AliceJohnson,Capital: 50000\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ reviewCashierPerformance � ����������� Cashier
TEST(OwnerTest, ReviewCashierPerformanceWithCashier) {
    // ������� ���-������ Cashier � ��������� Owner � ��������� Cashier
    Cashier cashier("Tom", 30, 1, 8);
    Owner owner("Alice", "Johnson", 50000.0, &cashier);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    owner.reviewCashierPerformance();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ reviewCashierPerformance
    std::string expected_output = "Owner Alice is reviewing cashier Tom's performance and payment processing history.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ reviewCashierPerformance ��� Cashier
TEST(OwnerTest, ReviewCashierPerformanceWithoutCashier) {  
    // ������� ��������� ������ Owner ��� Cashier
    Owner owner("Alice", "Johnson", 50000.0, nullptr);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    owner.reviewCashierPerformance();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ����� � ������, ��� ��� cashier == nullptr
    std::string expected_output = "";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}