///
/// Copyright (c) 2009-2014 Nous Xiong (348944179 at qq dot com)
///
/// Distributed under the Boost Software License, Version 1.0. (See accompanying
/// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
///
/// See https://github.com/nousxiong/gce for latest version.
///

#ifndef GCE_ASIO_SPT_OPTION_HPP
#define GCE_ASIO_SPT_OPTION_HPP

#include <gce/asio/config.hpp>
#include <gce/asio/spt_option.adl.h>

namespace gce
{
namespace asio
{
typedef adl::spt_option sptopt_t;
inline sptopt_t make_sptopt()
{
  return sptopt_t();
}
}
}

#endif /// GCE_ASIO_SPT_OPTION_HPP