void printListInOrder(Node *head) {
    if (head == nullptr) return;

    // Đệ quy để in các Node từ đuôi danh sách đến đầu danh sách
    printListInOrder(head->next);
    cout << head->data << " ";
}