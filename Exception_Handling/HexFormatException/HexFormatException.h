//
// Created by thoth on 6/20/23.
//

#ifndef HEXFORMATEXCEPTION_HEXFORMATEXCEPTION_H
#define HEXFORMATEXCEPTION_HEXFORMATEXCEPTION_H
#include <stdexcept>
using namespace std;

class HexFormatException: public invalid_argument
{
public:
    HexFormatException(): invalid_argument("String is not a hex string"){};
};

#endif //HEXFORMATEXCEPTION_HEXFORMATEXCEPTION_H
