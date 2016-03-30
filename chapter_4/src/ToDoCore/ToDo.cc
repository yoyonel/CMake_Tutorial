#include "ToDo.h"

namespace ToDoCore {

/**
 * @brief
 *
 */
ToDo::ToDo() {}

/**
 * @brief
 *
 */
ToDo::~ToDo() {}

/**
 * @brief
 *
 * @return size_t
 */
size_t ToDo::size() const { return this_tasks.size(); }

/**
 * @brief
 *
 * @param task
 */
void ToDo::addTask(const std::string& task) { this_tasks.push_back(task); }

/**
 * @brief
 *
 * @param index
 * @return std::string
 */
std::string ToDo::getTask(size_t index) const {
  if (index < this_tasks.size()) {
    return this_tasks[index];
  } else {
    return "";
  }
}

}  // namespace ToDo
