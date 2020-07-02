// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QFrame>

namespace Ui {
class MessagesFrame;
}

namespace WalletGui {

class VisibleMessagesModel;

class MessagesFrame : public QFrame {
  Q_OBJECT

public:
  MessagesFrame(QWidget* _parent);
  ~MessagesFrame();

private:
  QScopedPointer<Ui::MessagesFrame> m_ui;
  QScopedPointer<VisibleMessagesModel> m_visibleMessagesModel;

  void currentMessageChanged(const QModelIndex& _currentIndex);

  Q_SLOT void messageDoubleClicked(const QModelIndex& _index);
  Q_SLOT void replyClicked();

Q_SIGNALS:
  void replyToSignal(const QModelIndex& _index);
};

}
