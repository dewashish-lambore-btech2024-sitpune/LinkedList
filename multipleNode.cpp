#include <iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    ListNode* head = new ListNode(11);
    ListNode* second = new ListNode(4);
    ListNode* third = new ListNode(6);

    head->next = second;
    second->next = third;

    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    delete head;
    delete second;
    delete third;

    return 0;
}
