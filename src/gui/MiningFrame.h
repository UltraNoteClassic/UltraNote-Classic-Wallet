// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QFrame>

class QAbstractButton;

namespace Ui {
class MiningFrame;
}

namespace WalletGui {

class Miner;
class PoolModel;

class MiningFrame : public QFrame {
  Q_OBJECT

public:
  MiningFrame(QWidget* _parent);
  ~MiningFrame();

protected:
  void timerEvent(QTimerEvent* _event) Q_DECL_OVERRIDE;

private:
  QScopedPointer<Ui::MiningFrame> m_ui;
  Miner* m_miner;
  PoolModel* m_poolModel;
  int m_hashRateTimerId;

  void initCpuCoreList();
  void startMining();
  void stopMining();
  void walletClosed();
  Q_SLOT void addPoolClicked();
  Q_SLOT void startStopClicked(QAbstractButton* _button);
};

}
