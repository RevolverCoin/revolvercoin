// Copyright (c) 2011-2014 The RevolverCoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef REVOLVERCOIN_QT_REVOLVERCOINADDRESSVALIDATOR_H
#define REVOLVERCOIN_QT_REVOLVERCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class RevolverCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RevolverCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** RevolverCoin address widget validator, checks for a valid revolvercoin address.
 */
class RevolverCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RevolverCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // REVOLVERCOIN_QT_REVOLVERCOINADDRESSVALIDATOR_H
