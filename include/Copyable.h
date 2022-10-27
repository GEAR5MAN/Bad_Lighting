//
// Created by martiens on 10/26/22.
//

#ifndef ASSIGNMENT_3_V2_COPYABLE_H
#define ASSIGNMENT_3_V2_COPYABLE_H

namespace Base {

    class Copyable {
    public:
        virtual void * getCopy() const = 0;
    };

} // Base

#endif //ASSIGNMENT_3_V2_COPYABLE_H
