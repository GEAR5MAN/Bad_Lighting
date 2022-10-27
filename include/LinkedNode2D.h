//
// Created by martiens on 10/26/22.
//

#ifndef ASSIGNMENT_3_V2_LINKEDNODE2D_H
#define ASSIGNMENT_3_V2_LINKEDNODE2D_H

#include "../environment/LinkedListEnv.h"
#include <stdexcept>
#include <cstddef>

namespace Base {

    template<class TNode>
    class LinkedNode2D {
    public:
        typedef dimension_t dimension;
        typedef TNode object_type;

    public:
        LinkedNode2D();
        explicit LinkedNode2D(TNode * p_managed_object, std::size_t p_x_index = 0, std::size_t p_y_index = 0);
        virtual ~LinkedNode2D();

        TNode * getNodeObject() const;
        std::size_t getIndex(dimension p_dimension) const;
        LinkedNode2D<TNode> & getNext(dimension p_dimension) const;
        LinkedNode2D<TNode> & getPrevious(dimension p_dimension) const;

        void setNodeObject(TNode * p_managed_object);
        void setIndex(dimension p_dimension, const std::size_t  p_index);
        void setNext(dimension p_dimension, LinkedNode2D<TNode> * p_next);
        void setPrev(dimension p_dimension, LinkedNode2D<TNode> * p_previous);

    private:
        TNode * managed_object;
        std::size_t x_index, y_index;
        LinkedNode2D * x_next, * x_previous;
        LinkedNode2D * y_next, * y_previous;

    private:
        LinkedNode2D(const LinkedNode2D<TNode> &) : x_index(), y_index() {};
        LinkedNode2D<TNode> & operator = (const LinkedNode2D<TNode> &) {}; // NOLINT(bugprone-unhandled-self-assignment)
    };

} // Base

#include "../source/LinkedNode2D.hpp"

#endif //ASSIGNMENT_3_V2_LINKEDNODE2D_H
