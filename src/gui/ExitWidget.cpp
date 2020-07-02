// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QMovie>

#include "CurrencyAdapter.h"
#include "ExitWidget.h"

#include "ui_exitwidget.h"

namespace WalletGui {

ExitWidget::ExitWidget(QWidget* _parent) : QWidget(_parent, Qt::Window), m_ui(new Ui::ExitWidget),
  m_clockMovie(new QMovie(this)) {
  m_ui->setupUi(this);
  QString text = m_ui->m_label->text();
  m_ui->m_label->setText(text.arg(CurrencyAdapter::instance().getCurrencyDisplayName()));
  m_clockMovie->setFileName(":images/clock");
  m_clockMovie->setScaledSize(QSize(48, 48));
  m_ui->m_clockLabel->setMovie(m_clockMovie);
  m_clockMovie->start();
}

ExitWidget::~ExitWidget() {
}

}
