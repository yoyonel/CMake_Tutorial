#ifndef TODO_H
#define TODO_H

#include <string>
#include <vector>

namespace ToDoCore {

/**
 * @brief
 *
 */
class ToDo {
 public:
  /**
   * @brief
   *
   */
  ToDo();
  /**
   * @brief
   *
   */
  ~ToDo();

  /**
   * @brief
   *
   * @return size_t
   */
  size_t size() const;

  /**
   * @brief
   *
   * @param task
   */
  void addTask(const std::string& task);
  /**
   * @brief
   *
   * @param index
   * @return std::string
   */
  std::string getTask(size_t index) const;

 private:
  std::vector<std::string> this_tasks; /**< TODO */
};

}  // namespace ToDoCore

#endif  // TODO_H
