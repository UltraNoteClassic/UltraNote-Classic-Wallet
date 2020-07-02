// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "PasswordDialog.h"

#include "ui_passworddialog.h"

namespace WalletGui {

PasswordDialog::PasswordDialog(bool _error, QWidget* _parent) : QDialog(_parent), m_ui(new Ui::PasswordDialog) {
  m_ui->setupUi(this);
  if (!_error) {
    m_ui->m_errorLabel->hide();
  }

  adjustSize();
}

PasswordDialog::~PasswordDialog() {
}

QString PasswordDialog::getPassword() const {
  return m_ui->m_passwordEdit->text();
}
  
}
