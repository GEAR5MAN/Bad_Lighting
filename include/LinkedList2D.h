//
// Created by martiens on 10/26/22.
//

#ifndef ASSIGNMENT_3_V2_LINKEDLIST2D_H
#define ASSIGNMENT_3_V2_LINKEDLIST2D_H

#include "../environment/LinkedListEnv.h"
#include "LinkedNode2D.h"
#include "Copyable.h"
#include "cstddef"

namespace Base {

    template<class TList>
    class LinkedList2D {
    public:
        typedef typename LinkedNode2D<TList>::dimension dimension;

    public:
        LinkedList2D();
//        LinkedList2D(const std::size_t & p_x_dimension, const std::size_t & p_y_dimension);
//        LinkedList2D(const LinkedList2D<TList> & );

        virtual ~LinkedList2D();

        void add(Copyable & p_data);
        void add(TList & p_data);
        void set(std::size_t p_x_index, std::size_t p_y_index);
        TList * at(std::size_t p_x_index, std::size_t p_y_index) const;
        void remove(std::size_t p_x_index, std::size_t p_y_index);
        TList * iterate(dimension p_dimension) const;
        void reset(std::size_t p_x_index, std::size_t p_y_index);
//        void reset(dimension p_dimension);

        std::size_t get_x_dimension() const;
        std::size_t get_y_dimension() const;

    private:
        LinkedNode2D<TList> * head;
        std::size_t x_dimension, y_dimension;
        LinkedNode2D<TList> * iterationNode; // todo better name
    };

} // Base

#include "../source/LinkedList2D.hpp"

namespace Base {
    template <class TList>
    LinkedList2D<TList>::LinkedList2D() {
        x_dimension = 0;
        y_dimension = 0;

        head = NULL;
        iterationNode = NULL;
    }

    template <class TList>
    LinkedList2D<TList>::~LinkedList2D() {
        for (std::size_t x_index = 0; x_index < x_dimension; ++x_index) {
            reset(x_index, 0);

            while (LinkedNode2D<TList> * iterator = iterate(LinkedNode2D<TList>::dimension.y)) {
                delete iterator;
            }
        }
    }
}

#endif //ASSIGNMENT_3_V2_LINKEDLIST2D_H
