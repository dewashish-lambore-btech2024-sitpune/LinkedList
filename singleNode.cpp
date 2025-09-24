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
    ListNode* node = new ListNode(20);
    cout << "Node value: " << node->data << ", Next pointer: " << node->next << endl;
    delete node;
    return 0;
}
