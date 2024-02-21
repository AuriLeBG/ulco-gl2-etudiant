#include "Logger.hpp"

#include <algorithm>
#include <iomanip>
#include <map>
#include <sstream>

void Logger::addItem(Level l, const std::string & m) {
  _items.push_back(Item(l, m));
}

std::string Logger::reportByAdded() const {
  // TODO Logger::reportByAdded
  return "TODO Logger::reportByAdded";
}

std::string Logger::reportByLevel() const {
  // TODO Logger::reportByLevel
  return "TODO Logger::reportByLevel";
}

