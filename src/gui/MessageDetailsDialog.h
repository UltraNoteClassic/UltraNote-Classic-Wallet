// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDataWidgetMapper>
#include <QDialog>

namespace Ui {
class MessageDetailsDialog;
}

namespace WalletGui {

class MessageDetailsDialog : public QDialog {
  Q_OBJECT

public:
  MessageDetailsDialog(const QModelIndex& _index, QWidget* _parent);
  ~MessageDetailsDialog();

  QModelIndex getCurrentMessageIndex() const;

private:
  QScopedPointer<Ui::MessageDetailsDialog> m_ui;
  QDataWidgetMapper m_dataMapper;

  Q_SLOT void prevClicked();
  Q_SLOT void nextClicked();
  Q_SLOT void saveClicked();
};

}
