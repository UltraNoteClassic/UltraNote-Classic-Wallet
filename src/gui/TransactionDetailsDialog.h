// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class TransactionDetailsDialog;
}

namespace WalletGui {

class TransactionDetailsDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionDetailsDialog)

public:
  TransactionDetailsDialog(const QModelIndex &_index, QWidget* _parent);
  ~TransactionDetailsDialog();

private:
  QScopedPointer<Ui::TransactionDetailsDialog> m_ui;
  const QString m_detailsTemplate;
};

}
