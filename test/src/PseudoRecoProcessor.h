/*
 * Copyright (c) 2019-2024 Key4hep-Project.
 *
 * This file is part of Key4hep.
 * See https://key4hep.github.io/key4hep-doc/ for further info.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "marlin/Processor.h"

#include <string>

class PseudoRecoProcessor : public marlin::Processor {
public:
  PseudoRecoProcessor();

  marlin::Processor* newProcessor() final { return new PseudoRecoProcessor; }

  /** process the event - In this case simply link MCparticle[i] with
   * ReconstructedParticle[i]
   */
  void processEvent(LCEvent* evt) final;

private:
  std::string m_mcCollName{};
  std::string m_recoCollName{};
};
