#include "pch.h"
#include "D:\pois\Project8\Project8\Cleaner.h"
#include "D:\pois\Project8\Project8\Cleaner.cpp"

TEST(CleanerTest, IntroduceOutput) {
    // Создаем экземпляр класса Cleaner
    Cleaner cleaner("Alice", 40, 3, true, nullptr);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    cleaner.introduce();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода introduce
    std::string expected_output = "Cleaner Alice, Age: 40, Shift: 3, Currently on duty\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода cleanArea
TEST(CleanerTest, CleanAreaOutput) {
    // Создаем экземпляр класса Cleaner
    Cleaner cleaner("Alice", 40, 3, true, nullptr);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    cleaner.cleanArea("lobby");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода cleanArea
    std::string expected_output = "Cleaner Alice is cleaning the lobby area.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода receiveCleaningRequest
TEST(CleanerTest, ReceiveCleaningRequestOutput) {
    // Создаем экземпляр класса Host
    Host host("Bob", 30, 1, 2);

    // Создаем экземпляр класса Cleaner с указателем на объект Host
    Cleaner cleaner("Alice", 40, 3, true, &host);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    cleaner.receiveCleaningRequest("kitchen");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемая строка вывода для метода receiveCleaningRequest
    std::string expected_output = "Cleaner Alice received a request from Host Bob to clean kitchen area.\n";

    // Проверка, что фактический вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected_output);
}

// Тест для метода receiveCleaningRequest с отсутствием Host
TEST(CleanerTest, ReceiveCleaningRequestNoHost) {
    // Создаем экземпляр класса Cleaner без указателя на Host
    Cleaner cleaner("Alice", 40, 3, true, nullptr);

    // Захватываем стандартный вывод
    testing::internal::CaptureStdout();
    cleaner.receiveCleaningRequest("kitchen");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый пустой вывод, так как Host отсутствует
    std::string expected_output = "";

    // Проверка, что фактический вывод совпадает с ожидаемым (пустым)
    EXPECT_EQ(output, expected_output);
}