// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "NewAddressDialog.h"

#include "ui_newaddressdialog.h"

namespace WalletGui {

NewAddressDialog::NewAddressDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::NewAddressDialog) {
  m_ui->setupUi(this);
}

NewAddressDialog::~NewAddressDialog() {
}

QString NewAddressDialog::getAddress() const {
  return m_ui->m_addressEdit->text();
}


QString NewAddressDialog::getLabel() const {
  return m_ui->m_labelEdit->text();
}

}
