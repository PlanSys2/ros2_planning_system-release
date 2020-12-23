// Copyright 2019 Intelligent Robotics Lab
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PLANSYS2_PROBLEM_EXPERT__PROBLEMEXPERTINTERFACE_HPP_
#define PLANSYS2_PROBLEM_EXPERT__PROBLEMEXPERTINTERFACE_HPP_

#include <string>
#include <vector>

#include "plansys2_domain_expert/Types.hpp"
#include "plansys2_problem_expert/Types.hpp"

namespace plansys2
{

class ProblemExpertInterface
{
public:
  ProblemExpertInterface() {}

  virtual std::vector<Instance> getInstances() = 0;
  virtual bool addInstance(const Instance & instance) = 0;
  virtual bool removeInstance(const std::string & name) = 0;
  virtual boost::optional<Instance> getInstance(const std::string & name) = 0;

  virtual std::vector<Predicate> getPredicates() = 0;
  virtual bool addPredicate(const Predicate & predicate) = 0;
  virtual bool removePredicate(const Predicate & predicate) = 0;
  virtual bool existPredicate(const Predicate & predicate) = 0;

  virtual bool addAssignment(const Assignment & assignment) = 0;

  virtual Goal getGoal() = 0;
  virtual bool setGoal(const Goal & goal) = 0;
  virtual bool clearGoal() = 0;

  virtual std::string getProblem() = 0;
};

}  // namespace plansys2

#endif  // PLANSYS2_PROBLEM_EXPERT__PROBLEMEXPERTINTERFACE_HPP_
