/* file: bernoulli_dense_default_batch_fpt_cpu.cpp */
/*******************************************************************************
* Copyright 2014-2019 Intel Corporation
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
*******************************************************************************/

//++
//  Implementation of bernoulli algorithm functions.
//--

#include "bernoulli_batch_container.h"
#include "bernoulli_kernel.h"
#include "bernoulli_impl.i"

namespace daal
{
namespace algorithms
{
namespace distributions
{
namespace bernoulli
{

namespace interface1
{
template class BatchContainer<DAAL_FPTYPE, defaultDense, DAAL_CPU>;
} // namespace interface1

namespace internal
{
template class BernoulliKernel<DAAL_FPTYPE, defaultDense, DAAL_CPU>;
} // namespace internal

} // namespace bernoulli
} // namespace distributions
} // namespace algorithms
} // namespace daal
