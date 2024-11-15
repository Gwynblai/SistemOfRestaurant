#include "pch.h"
#include "D:\pois\Project8\Project8\Cleaner.h"
#include "D:\pois\Project8\Project8\Cleaner.cpp"

TEST(CleanerTest, IntroduceOutput) {
    // ������� ��������� ������ Cleaner
    Cleaner cleaner("Alice", 40, 3, true, nullptr);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    cleaner.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ introduce
    std::string expected_output = "Cleaner Alice, Age: 40, Shift: 3, Currently on duty\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ cleanArea
TEST(CleanerTest, CleanAreaOutput) {
    // ������� ��������� ������ Cleaner
    Cleaner cleaner("Alice", 40, 3, true, nullptr);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    cleaner.cleanArea("lobby");
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ cleanArea
    std::string expected_output = "Cleaner Alice is cleaning the lobby area.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ receiveCleaningRequest
TEST(CleanerTest, ReceiveCleaningRequestOutput) {
    // ������� ��������� ������ Host
    Host host("Bob", 30, 1, 2);

    // ������� ��������� ������ Cleaner � ���������� �� ������ Host
    Cleaner cleaner("Alice", 40, 3, true, &host);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    cleaner.receiveCleaningRequest("kitchen");
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ receiveCleaningRequest
    std::string expected_output = "Cleaner Alice received a request from Host Bob to clean kitchen area.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ receiveCleaningRequest � ����������� Host
TEST(CleanerTest, ReceiveCleaningRequestNoHost) {
    // ������� ��������� ������ Cleaner ��� ��������� �� Host
    Cleaner cleaner("Alice", 40, 3, true, nullptr);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    cleaner.receiveCleaningRequest("kitchen");
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ �����, ��� ��� Host �����������
    std::string expected_output = "";

    // ��������, ��� ����������� ����� ��������� � ��������� (������)
    EXPECT_EQ(output, expected_output);
}