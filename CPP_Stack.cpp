template <class StackType> class Stack
{
    class Node
    {
        public:
            Node* next;
            StackType value;
            operator= (Node* other)
            {
                this->value = other->value;
                this->next = other;

            }
    };

    Node* head;
    int stack_size = 0;

    public:
        void push(StackType item)
        {
            Node* new_head = new Node;
            new_head->value = item;
            new_head->next = this->head;
            this->head = new_head;
            ++stack_size;
        }

        bool isEmpty()
        {
            return stack_size == 0;
        }

        StackType peek()
        {
            return this->head->value;
        }

        StackType pop()
        {
            Node *old_head = this->head;
            this->head = this->head->next;
            --stack_size;
            return old_head->value;
        }

        Stack()
        {
            this->head = nullptr;
        }
};
