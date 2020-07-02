// Copyright © 2011-2015 The Cryptonote Developers
// Copyright © 2015-2017 The Digital Note Developers
// Copyright © 2020 The UltraNote Community Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "LoggerAdapter.h"
#include "Settings.h"

namespace WalletGui {

LoggerAdapter& LoggerAdapter::instance() {
  static LoggerAdapter inst;
  return inst;
}

void LoggerAdapter::init() {
  Common::JsonValue loggerConfiguration(Common::JsonValue::OBJECT);
  loggerConfiguration.insert("globalLevel", static_cast<int64_t>(Logging::INFO));
  Common::JsonValue& cfgLoggers = loggerConfiguration.insert("loggers", Common::JsonValue::ARRAY);
  Common::JsonValue& fileLogger = cfgLoggers.pushBack(Common::JsonValue::OBJECT);
  fileLogger.insert("type", "file");
  fileLogger.insert("filename", Settings::instance().getDataDir().absoluteFilePath("UltraNoteClassicWallet.log").toStdString());
  fileLogger.insert("level", static_cast<int64_t>(Logging::INFO));
  m_logManager.configure(loggerConfiguration);
}

LoggerAdapter::LoggerAdapter() : m_logManager() {
}

LoggerAdapter::~LoggerAdapter() {
}

Logging::LoggerManager& LoggerAdapter::getLoggerManager() {
  return m_logManager;
}

}
