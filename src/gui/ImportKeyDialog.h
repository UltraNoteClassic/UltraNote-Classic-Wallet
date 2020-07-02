// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class ImportKeyDialog;
}

namespace WalletGui {

class ImportKeyDialog : public QDialog {
  Q_OBJECT

public:
  ImportKeyDialog(QWidget* _parent);
  ~ImportKeyDialog();

  QString getKeyString() const;
  QString getFilePath() const;

private:
  QScopedPointer<Ui::ImportKeyDialog> m_ui;

  Q_SLOT void selectPathClicked();
};

}
