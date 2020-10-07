#ifndef MY_VECTOR_MY_VECTOR_H
#define MY_VECTOR_MY_VECTOR_H

#include <glob.h>
#include <iostream>
#include <initializer_list>

template<class Type>
class my_vector {
public:
    my_vector(std::initializer_list<Type> list) {
        size_v = list.size();
        data = new Type[capacity_v];

        int i = 0;
        for (Type item : list) {
            data[i++] = item;
        }
    }

    my_vector() {
        size_v = 0;
        capacity_v = size_v + 1;
        data = new Type[capacity_v];
    }

    /***** Default API *****/

    bool is_empty() {
        return size_v == 0;
    }

    Type end() {
        return data[size_v - 1];
    }

    Type begin() {
        Type *ptr = data;

        return *ptr;
    }

    void push_back(Type item) {
        size_v++;
        increase_memory();
        data[size_v - 1] = item;
    }

    void pop_back() {
        if (is_empty()) {
            // For debug
            std::cout << "Vector is empty" << std::endl;
            return;
        }
        data[size_v - 1] = 0;
        decrease_memory();
        size_v--;
    }

    void print() {
        if (size_v == 0) {
            // For debug
            std::cout << "Counter = 0" << std::endl;
            return;
        }
        for (auto i = 0; i < size_v; ++i) {
            std::cout << data[i] << std::endl;
        }
    }

    /***** End of default API *****/

    /***** Operators *****/

    my_vector &operator=(my_vector rhs) {
        swap(rhs);
        return *this;
    }

    /***** End of operators *****/

    ~my_vector() {
        delete[] data;
    }

private:
    Type *data = nullptr;
    size_t capacity_v = 0;
    size_t size_v = 0;

    void increase_memory() {
        Type *temp_data = new Type[capacity_v];
        std::swap(temp_data, data);
        capacity_v++;
        data = static_cast<Type *>(realloc(data, capacity_v));
        std::swap(data, temp_data);
        delete[] temp_data;
    }

    void decrease_memory() {
        Type *temp_data = new Type[capacity_v];
        std::swap(temp_data, data);
        capacity_v--;
        data = static_cast<Type *>(realloc(data, capacity_v));
        std::swap(data, temp_data);
        delete[] temp_data;
    }

    void swap(my_vector &rhs) {
        std::swap(data, rhs.data);
        std::swap(size_v, rhs.size_v);
        std::swap(capacity_v, rhs.capacity_v);
    }

};

#endif //MY_VECTOR_MY_VECTOR_H