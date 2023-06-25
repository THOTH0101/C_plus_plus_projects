//
// Created by thoth on 6/20/23.
//

#ifndef MODIFY_RATIONAL_CLASS_ILLEGALSUBSCRIPTEXCEPTION_H
#define MODIFY_RATIONAL_CLASS_ILLEGALSUBSCRIPTEXCEPTION_H
#include <stdexcept>
using namespace std;

class IllegalSubscriptException: public runtime_error
{
public:
    IllegalSubscriptException(int index): runtime_error("Index is out of bond"){};
};

#endif //MODIFY_RATIONAL_CLASS_ILLEGALSUBSCRIPTEXCEPTION_H
