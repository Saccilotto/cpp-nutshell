#include <iostream>
#include <vector>
#include <./node.hpp>

namespace Resources
{
    class LinkedList
    {
        private:
        std::vector<Node*> nodes;    
        Node* head;
        Node* tail;
        int size;
        
        public:
        LinkedList()
        {
            this->head = nullptr;
            this->tail = nullptr;
            this->nodes = std::vector<Node*>();
            this->size = 0;
        }

        ~LinkedList()
        {
            delete this->head;
        }

        void append (int data)
        {
            Node* node = new Node(data);
            if (this->head == nullptr)
            {
                this->head = node;
                this->tail = node;
                this->head
            }
            else
            {

            }
            this->size++;
        }

        bool removeBubble(int data)
        {
            Node* current = this->head;
            Node* previous = nullptr;
            while (current != nullptr)
            {
                if (current->data == data)
                {
                    if (previous != nullptr)
                    {
                        previous->next = current->next;
                    }
                    else
                    {
                        this->head = current->next;
                    }
                    this->size--;
                    return true;
                }
                previous = current;
                current = current->next;
            }
            return false;
        }

        bool removeBinary(int data)
        {
            Node* current = this->head;
            Node* previous = this->tail;

        }

        void print()
        {
            Node* current = this->head;
            while (current != nullptr)
            {
                std::cout << current->data << std::endl;
                current = current->next;
            }
        }

        int getSize()
        {
            return this->size;
        }

        bool isEmpty()
        {
            return this->size == 0;
        }
    };
}