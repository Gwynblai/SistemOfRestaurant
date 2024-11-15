#include "pch.h"
#include "D:\pois\Project8\Project8\SecurityGuard.h" 
#include "D:\pois\Project8\Project8\SecurityGuard.cpp" 

TEST(SecurityGuardTest, IntroduceOutput) {
    // ������� ��������� ������ SecurityGuard
    SecurityGuard guard("Alex", 35, "Night", true);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    guard.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ introduce
    std::string expected_output = "Security Guard Alex, Age: 35, Shift: Night, Armed: Yes\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ patrol
TEST(SecurityGuardTest, PatrolOutput) {
    // ������� ��������� ������ SecurityGuard
    SecurityGuard guard("Alex", 35, "Night", true);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    guard.patrol();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ patrol
    std::string expected_output = "Security Guard Alex is patrolling during the Night shift.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}