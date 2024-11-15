#include "pch.h"
#include "D:\pois\Project8\Project8\Host.h"
#include "D:\pois\Project8\Project8\Host.cpp"


TEST(HostTest, GreetCustomerFormal) {
    // ������� ��������� ������ Host � ���������� ������ ����������� (greetingStyle = 0)
    Host host("James", 25, 0, 1);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    host.greetCustomer();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ����������� �����������
    std::string expected_output = "Host James: Welcome to our restaurant. Please follow me to your table.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ greetCustomer � ����������� ������ �����������
TEST(HostTest, GreetCustomerFriendly) {
    // ������� ��������� ������ Host � ����������� ������ ����������� (greetingStyle = 1)
    Host host("James", 25, 1, 1);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    host.greetCustomer();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������������ �����������
    std::string expected_output = "Host James: Hi! So glad you're here! I'll show you to your table!\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ introduce
TEST(HostTest, IntroduceOutput) {
    // ������� ��������� ������ Host � ���������� ������ �����������
    Host host("James", 25, 0, 2);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    host.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ introduce
    std::string expected_output = "Host James, Age: 25, Assigned Area: 2, Greeting Style: Formal\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}