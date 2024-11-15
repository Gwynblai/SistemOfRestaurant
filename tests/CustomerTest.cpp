#include "pch.h"
#include "D:\pois\Project8\Project8\Customer.h"
#include "D:\pois\Project8\Project8\Customer.cpp"

TEST(CustomerTest, AddToOrderOutput) {
    // ������� ���-������ Waiter � ��������� ������ Customer
    Waiter waiter("John", 25, 5, nullptr);
    Customer customer("Alice", "Smith", &waiter); 
   

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    customer.addToOrder("Pasta", 12.5);
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ addToOrder
    std::string expected_output =
        "Alice ordered: Pasta ($12.5)\n"
        "Waiter John is taking order: 'Pasta' for table 5.\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ displayself
TEST(CustomerTest, DisplaySelfOutput) {
    // ������� ��������� ������ Customer
    Customer customer("Alice", "Smith", nullptr);

    // ��������� ��������� �������
    customer.addToOrder("Pasta", 12.5);
    customer.addToOrder("Salad", 5.0);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    customer.displayself();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ displayself
    std::string expected_output =
        "Customer Name: Alice, Last name: Smith\n"
        "Current order: Pasta Salad \n"
        "Total Bill: $17.5\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}

// ���� ��� ������ addToOrder ��� Waiter
TEST(CustomerTest, AddToOrderNoWaiter) {
    // ������� ��������� ������ Customer ��� Waiter
    Customer customer("Alice", "Smith", nullptr);

    // ����������� ����������� �����
    testing::internal::CaptureStdout();
    customer.addToOrder("Soup", 8.0);
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ������ ������ ��� ������ addToOrder ��� �������������� � Waiter
    std::string expected_output = "Alice ordered: Soup ($8)\n";

    // ��������, ��� ����������� ����� ��������� � ���������
    EXPECT_EQ(output, expected_output);
}