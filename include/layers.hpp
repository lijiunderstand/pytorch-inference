//
// Created by Aman LaChapelle on 5/19/17.
//
// pytorch_inference
// Copyright (c) 2017 Aman LaChapelle
// Full license at pytorch_inference/LICENSE.txt
//

/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef PYTORCH_INFERENCE_LAYERS_HPP
#define PYTORCH_INFERENCE_LAYERS_HPP

#include "modules/Layer.hpp"

#include "modules/Activations.hpp"
#include "modules/Branch.hpp"
#include "modules/Concatenate.hpp"
#include "modules/Convolution.hpp"
#include "modules/Linear.hpp"
#include "modules/Normalization.hpp"
#include "modules/Pooling.hpp"
#include "modules/Slice.hpp"
#include "modules/Sum.hpp"

namespace pytorch {

  /**
   * @brief Convenience enum to use whenever you need to specify a dimension (like in Concat)
   */
  enum dims {
    n = 3,
    k = 2,
    h = 0,
    w = 1
  };

} // pytorch



#endif //PYTORCH_INFERENCE_LAYERS_HPP
