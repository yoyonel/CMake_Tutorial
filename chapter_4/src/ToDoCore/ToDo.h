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
   * @brief Constructeur pour la classe ToDo
   *
   */
  ToDo();
  /**
   * @brief Destructeur de la classe ToDo
   *
   */
  ~ToDo();

  /**
   * @brief Renvoie la taille de la liste des tâches qui restent à effectuer.
   *
   * @return size_t
   */
  size_t size() const;

  /**
   * @brief Rajoute une tâche dans la liste des tâches à effectuer
   *
   * @param task
   */
  void addTask(const std::string& task);
  /**
   * @brief Renvoie la tâche d'indice `index`
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
