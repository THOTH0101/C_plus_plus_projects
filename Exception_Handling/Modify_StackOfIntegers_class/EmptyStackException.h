//
// Created by thoth on 6/22/23.
//

#ifndef MODIFY_STACKOFINTEGERS_CLASS_EMPTYSTACKEXCEPTION_H
#define MODIFY_STACKOFINTEGERS_CLASS_EMPTYSTACKEXCEPTION_H
#include <stdexcept>
using namespace std;

class EmptyStackException: public runtime_error
{
public:
    EmptyStackException(): runtime_error("Stack is empty"){};
};

#endif //MODIFY_STACKOFINTEGERS_CLASS_EMPTYSTACKEXCEPTION_H
