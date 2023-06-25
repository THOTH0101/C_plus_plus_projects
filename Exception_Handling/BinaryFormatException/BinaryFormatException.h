//
// Created by thoth on 6/20/23.
//

#ifndef BINARYFORMATEXCEPTION_BINARYFORMATEXCEPTION_H
#define BINARYFORMATEXCEPTION_BINARYFORMATEXCEPTION_H
#include <stdexcept>
using namespace std;

class BinaryFormatException: public invalid_argument
{
public:
    BinaryFormatException(): invalid_argument("String is not a binary string"){};
};

#endif //BINARYFORMATEXCEPTION_BINARYFORMATEXCEPTION_H
