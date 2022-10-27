//
// Created by martiens on 10/26/22.
//

namespace Base {

    template<class TNode>
    LinkedNode2D<TNode>::LinkedNode2D() {
        x_index = 0;
        y_index = 0;

        x_next = NULL;
        y_next = NULL;
        x_previous = NULL;
        y_previous = NULL;

        managed_object = NULL;
    }

    template<class TNode>
    LinkedNode2D<TNode>::LinkedNode2D(TNode *p_managed_object, std::size_t p_x_index, std::size_t p_y_index) {
        x_index = p_x_index;
        y_index = p_y_index;

        x_next = NULL;
        y_next = NULL;
        x_previous = NULL;
        y_previous = NULL;

        managed_object = p_managed_object;
    }

    template<class TNode>
    LinkedNode2D<TNode>::~LinkedNode2D() {
        delete managed_object;
    }

    template<class TNode>
    TNode * LinkedNode2D<TNode>::getNodeObject() const {
        return managed_object;
    }

    template<class TNode>
    std::size_t LinkedNode2D<TNode>::getIndex(LinkedNode2D::dimension p_dimension) const {
        if (p_dimension == x) {
            return x_index;
        } else {
            return y_index;
        }
    }

    template<class TNode>
    LinkedNode2D<TNode> & LinkedNode2D<TNode>::getNext(LinkedNode2D::dimension p_dimension) const {
        if (p_dimension == x) {
            return x_next;
        } else {
            return y_next;
        }
    }

    template<class TNode>
    LinkedNode2D<TNode> & LinkedNode2D<TNode>::getPrevious(LinkedNode2D::dimension p_dimension) const {
        if (p_dimension == x) {
            return x_previous;
        } else {
            return y_previous;
        }
    }

    template<class TNode>
    void LinkedNode2D<TNode>::setNodeObject(TNode * p_managed_object) {
        if (!p_managed_object) {
            managed_object = p_managed_object;
        }
    }

    template<class TNode>
    void LinkedNode2D<TNode>::setIndex(LinkedNode2D::dimension p_dimension, const std::size_t p_index) {
        if (p_dimension == x) {
            x_index = p_index;
        } else {
            y_index = p_index;
        }
    }

    template<class TNode>
    void LinkedNode2D<TNode>::setNext(LinkedNode2D::dimension p_dimension, LinkedNode2D<TNode> * p_next) {
        if (p_dimension == x) {
            x_next = p_next;
        } else {
            y_next = p_next;
        }
    }

    template<class TNode>
    void LinkedNode2D<TNode>::setPrev(LinkedNode2D::dimension p_dimension, LinkedNode2D<TNode> *p_previous) {
        if (p_dimension == x) {
            x_previous = p_previous;
        } else {
            y_previous = p_previous;
        }
    }

} // Base