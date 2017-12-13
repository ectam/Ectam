#ifndef ECTAMADDRESSVALIDATOR_H
#define ECTAMADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class EctamAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit EctamAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // ECTAMADDRESSVALIDATOR_H
