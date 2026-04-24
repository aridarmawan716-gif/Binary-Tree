#include <iostream>
using namespace std;

// Struktur dasar sebuah Node di dalam Tree
struct Node {
    int data;
    Node *left;
    Node *right;

    // Constructor untuk memudahkan pembuatan node baru
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Fungsi pembantu untuk mencetak Tree (menggunakan metode Inorder: Left, Root, Right)
void printInorder(Node* node) {
    if (node == NULL) return;
    
    printInorder(node->left);      // Ke kiri
    cout << node->data << " ";     // Cetak data
    printInorder(node->right);     // Ke kanan
}

int main() {
    // Membangun Binary Tree sesuai data di gambar
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Menampilkan isi tree
    cout << "Isi Binary Tree (Inorder Traversal): " << endl;
    printInorder(root);
    cout << endl;

    return 0;
}
