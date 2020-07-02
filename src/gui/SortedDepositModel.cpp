// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "SortedDepositModel.h"
#include "DepositModel.h"

namespace WalletGui {

SortedDepositModel& SortedDepositModel::instance() {
  static SortedDepositModel inst;
  return inst;
}

SortedDepositModel::SortedDepositModel() : QSortFilterProxyModel() {
  setSourceModel(&DepositModel::instance());
  setDynamicSortFilter(true);
  sort(DepositModel::COLUMN_CREATING_TIME, Qt::DescendingOrder);
}

SortedDepositModel::~SortedDepositModel() {
}

bool SortedDepositModel::lessThan(const QModelIndex& _left, const QModelIndex& _right) const {
  quint32 leftTransactionId = _left.data(DepositModel::ROLE_CREATING_TRANSACTION_ID).toUInt();
  quint32 rightTransactionId = _right.data(DepositModel::ROLE_CREATING_TRANSACTION_ID).toUInt();
  return leftTransactionId < rightTransactionId;
}

}
