#include "pch.h"
#include "D:\pois\Project8\Project8\Manager.h"
#include "D:\pois\Project8\Project8\Manager.cpp"

TEST(ManagerTest, IntroduceOutput) {
    // ������� ��������� ������ Manager
    Manager manager("Sophia", 40, 15, "Sales");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    manager.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ introduce
    std::string expected_output = "Manager Sophia, age 40, Experience: 15, Department: Sales\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ assignTask
TEST(ManagerTest, AssignTaskOutput) {
    // ������� ��������� ������ Manager
    Manager manager("Sophia", 40, 15, "Sales");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    manager.assignTask("Prepare sales report", "Alice");
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ assignTask
    std::string expected_output = "Manager Sophia assigns task: 'Prepare sales report' to Alice.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ manageStaff
TEST(ManagerTest, ManageStaffOutput) {
    // ������� ��������� ������ Manager
    Manager manager("Sophia", 40, 15, "Sales");

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    manager.manageStaff();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ manageStaff
    std::string expected_output = "Manager Sophia is managing the staff in the Sales department.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}