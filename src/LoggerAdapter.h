// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "Logging/LoggerManager.h"

namespace WalletGui {

class LoggerAdapter {

public:
  static LoggerAdapter& instance();
  void init();
  Logging::LoggerManager& getLoggerManager();

private:
  Logging::LoggerManager m_logManager;

  LoggerAdapter();
  ~LoggerAdapter();
};

}
