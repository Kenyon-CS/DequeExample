#include <iostream>
#include <queue>
#include <deque>
#include <string>

// Function to display contents of a queue (queue allows only front removal)
void displayQueue(std::queue<std::string> q) {
    std::cout << "Queue contents: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

// Function to display contents of a deque (deque allows access at both ends)
void displayDeque(const std::deque<std::string>& d) {
    std::cout << "Deque contents: ";
    for (const auto& item : d) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Using std::queue
    std::queue<std::string> q;

    // Adding 5 strings to the queue
    q.push("apple");
    q.push("banana");
    q.push("cherry");
    q.push("date");
    q.push("elderberry");

    std::cout << "Queue after adding 5 strings: " << std::endl;
    displayQueue(q);

    // Re-add the same items to the queue for demonstration purposes
    q.push("apple");
    q.push("banana");
    q.push("cherry");
    q.push("date");
    q.push("elderberry");

    // Removing 3 strings from the queue
    q.pop();
    q.pop();
    q.pop();

    std::cout << "Queue after removing 3 strings: " << std::endl;
    displayQueue(q);

    // Using std::deque
    std::deque<std::string> d;

    // Adding 5 strings to the deque at the back
    d.push_back("apple");
    d.push_back("banana");
    d.push_back("cherry");
    d.push_back("date");
    d.push_back("elderberry");

    std::cout << "Deque after adding 5 strings to the back: " << std::endl;
    displayDeque(d);

    // Remove 2 strings from the front
    d.pop_front();
    d.pop_front();

    std::cout << "Deque after removing 2 strings from the front: " << std::endl;
    displayDeque(d);

    // Adding 2 more strings, one to the front and one to the back
    d.push_front("fig");
    d.push_back("grape");

    std::cout << "Deque after adding 'fig' to the front and 'grape' to the back: " << std::endl;
    displayDeque(d);

    return 0;
}
