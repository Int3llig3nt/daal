/* file: adagrad_dense_default_batch_fpt_dispatcher.cpp */
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
//  Implementation of adagrad calculation algorithm container.
//--


#include "adagrad_batch_container.h"

namespace daal
{
namespace algorithms
{
__DAAL_INSTANTIATE_DISPATCH_CONTAINER_SYCL(optimization_solver::adagrad::BatchContainer, batch, DAAL_FPTYPE, optimization_solver::adagrad::defaultDense)

namespace optimization_solver
{
namespace adagrad
{
namespace interface2
{
using BatchType = Batch<DAAL_FPTYPE, optimization_solver::adagrad::defaultDense>;

template<>
services::SharedPtr<BatchType> BatchType::create()
{
    return services::SharedPtr<BatchType>(new BatchType());
}
} // namespace interface1
} // namespace adagrad
} // namespace optimization_solver
} // namespace algorithms
} // namespace daal
