//
// Created by thoth on 6/11/23.
//

#ifndef THE_EVENNUMBER_CLASS_EVENNUMBER_H
#define THE_EVENNUMBER_CLASS_EVENNUMBER_H

class EvenNumber
{
public:
    int value;
    EvenNumber();
    EvenNumber(int newValue);
    int getValue() const;
    int getNext() const;
    int getPrevious() const;

    //define the preincrement and predecrement
    int operator++() const;
    int operator--() const;

    //define the postincrement and postdecrement operators
    int operator++(int dummy) const;
    int operator--(int dummy) const;
};

#endif //THE_EVENNUMBER_CLASS_EVENNUMBER_H