// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QFrame>

namespace Ui {
class ReceiveFrame;
}

namespace WalletGui {

class ReceiveFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(ReceiveFrame)

public:
  ReceiveFrame(QWidget* _parent);
  ~ReceiveFrame();

private:
  QScopedPointer<Ui::ReceiveFrame> m_ui;

  void updateWalletAddress(const QString& _address);
  void walletOpened(int _error);
  void walletClosed();

  Q_SLOT void copyAddress();
  Q_SLOT void copyKey();
  Q_SLOT void showKeyClicked();
};

}
