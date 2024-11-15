#include "pch.h"
#include "D:\pois\Project8\Project8\DefaultPerson.h"
#include "D:\pois\Project8\Project8\DefaultPerson.cpp"

// ���� ��� ������ getName
TEST(DefaultPersonTest, GetName) { 
    // ������� ��������� ������ DefaultPerson
    DefaultPerson person("John", "Doe");

    // ���������, ��� getName ���������� ���, ������� ���� ������ � ������������
    EXPECT_EQ(person.getName(), "John");
}

// ���� ��� ������ displayself
TEST(DefaultPersonTest, DisplaySelfOutput) {
    // ������� ��������� ������ DefaultPerson
    DefaultPerson person("John", "Doe");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    person.displayself();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������
    std::string expected_output = "Name: John,LastName: Doe\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}