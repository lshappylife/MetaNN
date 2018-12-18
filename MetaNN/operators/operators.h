#pragma once

// Data transform
#include <MetaNN/operators/duplicate.h>
#include <MetaNN/operators/collapse.h>

// Element-wise operators
#include <MetaNN/operators/abs.h>
#include <MetaNN/operators/acos.h>
#include <MetaNN/operators/acos_grad.h>
#include <MetaNN/operators/add.h>
#include <MetaNN/operators/asin.h>
#include <MetaNN/operators/asin_grad.h>
#include <MetaNN/operators/divide.h>
#include <MetaNN/operators/interpolate.h>
#include <MetaNN/operators/multiply.h>
#include <MetaNN/operators/sigmoid.h>
#include <MetaNN/operators/sigmoid_grad.h>
#include <MetaNN/operators/sign.h>
#include <MetaNN/operators/substract.h>
#include <MetaNN/operators/tanh.h>
#include <MetaNN/operators/tanh_grad.h>

#include <MetaNN/operators/transpose.h>

// BLAS operators
#include <MetaNN/operators/dot.h>

// non-linear activation operators
#include <MetaNN/operators/softmax.h>