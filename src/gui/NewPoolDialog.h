// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class NewPoolDialog;
}

namespace WalletGui {

class NewPoolDialog : public QDialog {
  Q_OBJECT

public:
  NewPoolDialog(QWidget* _parent);
  ~NewPoolDialog();

  QString getHost() const;
  quint16 getPort() const;

private:
  QScopedPointer<Ui::NewPoolDialog> m_ui;
};

}
