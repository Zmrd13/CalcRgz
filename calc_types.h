#ifndef CALC_TYPES_H
#define CALC_TYPES_H
#include <QtGlobal>
#include <QByteArray>
#include <QString>
namespace CalcType{
class Number;
class wrongBase : public std::exception {
    public:
char * what () {
        return "wrong base of number";
    }
};

}

class CalcType::Number{
private:

    bool reserve_sign=false;
    quint8 base;
    QString _numStr;
    int _numInt;

public:
    inline explicit Number(QString number,quint8 base=10):base(base),_numStr(number){
        bool checkBase;
        _numInt=number.toInt(&checkBase,base);
        if(!checkBase){
            throw CalcType::wrongBase();
        }
    };
    QString toString(){
        return _numStr;
    };
    int toInt(){
        return _numInt;
    }



};
#endif // CALC_TYPES_H
