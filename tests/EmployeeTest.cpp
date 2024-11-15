#include "pch.h"
#include "D:\pois\Project8\Project8\Employee.cpp"
#include "D:\pois\Project8\Project8\Employee.h"

TEST(EmployeeTest, GetName) {
    // ������� ��������� ������ Employee
    Employee employee("John", 28);

    // ���������, ��� getname ���������� ���������� ���
    EXPECT_EQ(employee.getname(), "John");
}

// ���� ��� ������ introduce
TEST(EmployeeTest, IntroduceOutput) {
    // ������� ��������� ������ Employee
    Employee employee("John", 28);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    employee.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ introduce
    std::string expected_output = "Employee: John,Age: 28";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}